idf_component_register(
    SRCS 
        "main.c"
        "audio.c"
        "ui_audio.c"

    INCLUDE_DIRS
        "include"
        )

spiffs_create_partition_image(storage ../spiffs FLASH_IN_PROJECT)


