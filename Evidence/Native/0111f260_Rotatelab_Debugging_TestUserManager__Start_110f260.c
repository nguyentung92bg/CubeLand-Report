/* IL2CPP: Rotatelab.Debugging.TestUserManager$$Start
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Debugging_TestUserManager__Start (Rotatelab_Debugging_TestUserManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.TestUserManager$$Start
   Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Debugging_TestUserManager__Start
   (Rotatelab_Debugging_TestUserManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Debugging_TestUserManager__Start_110f260(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar1 = (char *)(_UNK_0111f2f4 + 0x111f278);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f2f8 + 0x111f28c));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  thunk_FUN_00ec5080((uint)&uStack_28 | 4);
  uStack_20 = param_1;
  thunk_FUN_00ec5080(&uStack_20,param_1);
  uStack_28 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_TestUserManager__Start_d__15__13ebf7c
            ((uint)&uStack_28 | 4,&uStack_28,**(undefined4 **)(_UNK_0111f2fc + 0x111f2d8));
  return 0;
}

