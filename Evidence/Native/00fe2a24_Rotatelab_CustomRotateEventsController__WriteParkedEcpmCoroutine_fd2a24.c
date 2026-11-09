/* IL2CPP: Rotatelab.CustomRotateEventsController$$WriteParkedEcpmCoroutine
System_Collections_IEnumerator_o* Rotatelab_CustomRotateEventsController__WriteParkedEcpmCoroutine (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$WriteParkedEcpmCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_CustomRotateEventsController__WriteParkedEcpmCoroutine
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

int Rotatelab_CustomRotateEventsController__WriteParkedEcpmCoroutine_fd2a24(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_00fe2a90 + 0xfe2a38);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2a94 + 0xfe2a4c));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe2a98 + 0xfe2a60));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

