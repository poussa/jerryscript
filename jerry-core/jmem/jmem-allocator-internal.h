/* Copyright 2014-2016 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef JMEM_ALLOCATOR_INTERNAL_H
#define JMEM_ALLOCATOR_INTERNAL_H

#ifndef JMEM_ALLOCATOR_INTERNAL
# error "The header is for internal routines of memory allocator component. Please, don't use the routines directly."
#endif /* !JMEM_ALLOCATOR_INTERNAL */

/** \addtogroup mem Memory allocation
 * @{
 */

extern void jmem_run_try_to_give_memory_back_callbacks (jmem_try_give_memory_back_severity_t);

/**
 * @}
 */

#endif /* !JMEM_ALLOCATOR_INTERNAL_H */