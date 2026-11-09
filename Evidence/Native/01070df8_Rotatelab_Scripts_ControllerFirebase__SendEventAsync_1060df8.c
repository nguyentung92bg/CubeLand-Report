/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SendEventAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Scripts_ControllerFirebase__SendEventAsync (System_String_o* eventName, Firebase_Analytics_Parameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SendEventAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Scripts_ControllerFirebase__SendEventAsync
   (System_String_o* eventName, Firebase_Analytics_Parameter_array* parameters, const MethodInfo*
   method); */

undefined4
Rotatelab_Scripts_ControllerFirebase__SendEventAsync_1060df8(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_01070ea0 + 0x1070e14);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070ea4 + 0x1070e28));
    *pcVar1 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  thunk_FUN_00ec5080((uint)&uStack_38 | 4,0);
  uStack_30 = param_1;
  thunk_FUN_00ec5080(&uStack_30,param_1);
  uStack_2c = param_2;
  thunk_FUN_00ec5080(&uStack_2c,param_2);
  uStack_38 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_ControllerFirebase__SendEventAsync_d__21__13eba00
            ((uint)&uStack_38 | 4,&uStack_38,**(undefined4 **)(_UNK_01070ea8 + 0x1070e84));
  return 0;
}

