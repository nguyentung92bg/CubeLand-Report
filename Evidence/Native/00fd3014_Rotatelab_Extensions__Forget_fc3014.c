/* IL2CPP: Rotatelab.Extensions$$Forget
void Rotatelab_Extensions__Forget (System_Threading_Tasks_Task_o* task, bool logExceptions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Forget
   void Rotatelab_Extensions__Forget (System_Threading_Tasks_Task_o* task, bool logExceptions, const
   MethodInfo* method); */

void Rotatelab_Extensions__Forget_fc3014(undefined4 param_1,undefined1 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar1 = (char *)(_UNK_00fd30cc + 0xfd3030);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd30d0 + 0xfd3044));
    *pcVar1 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2a93b18(&uStack_50,0);
  puVar2 = (undefined4 *)((uint)&uStack_40 | 4);
  *puVar2 = uStack_50;
  puVar2[1] = uStack_4c;
  puVar2[2] = uStack_48;
  puVar2[3] = uStack_44;
  thunk_FUN_00ec5080(puVar2,0);
  puVar2[4] = param_1;
  thunk_FUN_00ec5080(puVar2 + 4,param_1);
  uStack_28 = CONCAT31(uStack_28._1_3_,param_2);
  uStack_40 = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_Extensions__Forget_d__98__13eed24
            (puVar2,&uStack_40,**(undefined4 **)(_UNK_00fd30d4 + 0xfd30b4));
  return;
}

