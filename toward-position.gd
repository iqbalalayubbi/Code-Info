# toward position peluru
var bullet_instance = bullet.instance()
bullet_instance.position = $BulletPoint.get_global_position()
bullet_instance.rotation_degrees = rotation_degrees
bullet_instance.apply_impulse(Vector2(),Vector2(speedBullet,0).rotated(rotation))
get_tree().get_root().add_child(bullet_instance)

# enemy ai movement to sprite ( taro di func physic_process)

var angle = get_angle_to(get_parent().get_node("player").position)
velocity.x = cos(angle)
velocity.y = sin(angle)
global_position += velocity * 100 * delta
