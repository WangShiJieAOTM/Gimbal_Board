#ifndef COMMUNICATE_TASK_H
#define COMMUNICATE_TASK_H

#include "struct_typedef.h"
#include "cmsis_os.h"
#include "main.h"

#define COM_CONTROL_TIME_MS 2

//任务开始空闲一段时间
#define COMMUNICATE_TASK_INIT_TIME 30


/**
  * @brief          test_task
  * @param[in]      pvParameters: NULL
  * @retval         none
  */
extern void communicate_task(void *pvParameters);






#endif
