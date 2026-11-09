/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SetUserPropertyAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Scripts_ControllerFirebase__SetUserPropertyAsync (System_String_o* name, System_String_o* property, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SetUserPropertyAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Scripts_ControllerFirebase__SetUserPropertyAsync
   (System_String_o* name, System_String_o* property, const MethodInfo* method); */

undefined4
Rotatelab_Scripts_ControllerFirebase__SetUserPropertyAsync_106109c
          (undefined4 param_1,undefined4 param_2)

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
  
  pcVar1 = (char *)(_UNK_01071144 + 0x10710b8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071148 + 0x10710cc));
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
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_ControllerFirebase__SetUserPropertyAsync_d__24__13eba68
            ((uint)&uStack_38 | 4,&uStack_38,**(undefined4 **)(_UNK_0107114c + 0x1071128));
  return 0;
}

