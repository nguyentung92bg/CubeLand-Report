/* IL2CPP: Rotatelab.CustomRotateEventsController$$SendEcpmToSatoriAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync (Rotatelab_CustomRotateEventsController_o* __this, System_Collections_Generic_Dictionary_string__string__o* properties, bool refreshFlags, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$SendEcpmToSatoriAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o
   Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync
   (Rotatelab_CustomRotateEventsController_o* __this,
   System_Collections_Generic_Dictionary_string__string__o* properties, bool refreshFlags, const
   MethodInfo* method); */

undefined4
Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync_fd39f0
          (undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  char *pcVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar1 = (char *)(_UNK_00fe3a94 + 0xfe3a0c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3a98 + 0xfe3a20));
    *pcVar1 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  thunk_FUN_00ec5080((uint)&uStack_40 | 4);
  uStack_38 = param_2;
  thunk_FUN_00ec5080(&uStack_38,param_2);
  uStack_30 = CONCAT31(uStack_30._1_3_,param_3);
  uStack_40 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_CustomRotateEventsController__SendEcpmToSatoriAsync_d__68__13eba9c
            ((uint)&uStack_40 | 4,&uStack_40,**(undefined4 **)(_UNK_00fe3a9c + 0xfe3a78));
  return 0;
}

