		// How much to increase the texture coordinate per screen pixel
		map->step = 1.0 * texHeight / data->lineHeight;

		// Starting texture coordinate
		map->texPos = (data->drawStart - pitch - (double)screenHeight / 2 + (double)data->lineHeight / 2) * map->step;
		for (int y = data->drawStart; y < data->drawEnd; y++)
		{
			int texY = (int)map->texPos & (texHeight - 1);
			map->texPos += map->step;
			if (data->side == '0' && data->rayDirX > 0)
				ft_pixel_put(data->m_ptr, x, y, ft_pixel_get(&data->txt_ptr[0], texX, texY));
			else if (data->side == '0' && data->rayDirX < 0)
				ft_pixel_put(data->m_ptr, x, y, ft_pixel_get(&data->txt_ptr[1], texX, texY));
			else if (data->side == '1' && data->rayDirY > 0)
				ft_pixel_put(data->m_ptr, x, y, ft_pixel_get(&data->txt_ptr[2], texX, texY));
			else if (data->side == '1' && data->rayDirY < 0)
				ft_pixel_put(data->m_ptr, x, y, ft_pixel_get(&data->txt_ptr[3], texX, texY));
		}
	}