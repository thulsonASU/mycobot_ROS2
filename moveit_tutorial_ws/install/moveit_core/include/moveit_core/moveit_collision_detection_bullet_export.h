
#ifndef MOVEIT_COLLISION_DETECTION_BULLET_EXPORT_H
#define MOVEIT_COLLISION_DETECTION_BULLET_EXPORT_H

#ifdef MOVEIT_COLLISION_DETECTION_BULLET_STATIC_DEFINE
#  define MOVEIT_COLLISION_DETECTION_BULLET_EXPORT
#  define MOVEIT_COLLISION_DETECTION_BULLET_NO_EXPORT
#else
#  ifndef MOVEIT_COLLISION_DETECTION_BULLET_EXPORT
#    ifdef moveit_collision_detection_bullet_EXPORTS
        /* We are building this library */
#      define MOVEIT_COLLISION_DETECTION_BULLET_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MOVEIT_COLLISION_DETECTION_BULLET_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MOVEIT_COLLISION_DETECTION_BULLET_NO_EXPORT
#    define MOVEIT_COLLISION_DETECTION_BULLET_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MOVEIT_COLLISION_DETECTION_BULLET_DEPRECATED
#  define MOVEIT_COLLISION_DETECTION_BULLET_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MOVEIT_COLLISION_DETECTION_BULLET_DEPRECATED_EXPORT
#  define MOVEIT_COLLISION_DETECTION_BULLET_DEPRECATED_EXPORT MOVEIT_COLLISION_DETECTION_BULLET_EXPORT MOVEIT_COLLISION_DETECTION_BULLET_DEPRECATED
#endif

#ifndef MOVEIT_COLLISION_DETECTION_BULLET_DEPRECATED_NO_EXPORT
#  define MOVEIT_COLLISION_DETECTION_BULLET_DEPRECATED_NO_EXPORT MOVEIT_COLLISION_DETECTION_BULLET_NO_EXPORT MOVEIT_COLLISION_DETECTION_BULLET_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MOVEIT_COLLISION_DETECTION_BULLET_NO_DEPRECATED
#    define MOVEIT_COLLISION_DETECTION_BULLET_NO_DEPRECATED
#  endif
#endif

#endif /* MOVEIT_COLLISION_DETECTION_BULLET_EXPORT_H */
