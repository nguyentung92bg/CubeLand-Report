/* IL2CPP: Rotatelab.CustomRotateEventsController$$Start
System_Collections_IEnumerator_o* Rotatelab_CustomRotateEventsController__Start (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$Start
   System_Collections_IEnumerator_o* Rotatelab_CustomRotateEventsController__Start
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

int Rotatelab_CustomRotateEventsController__Start_fc77d4(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_00fd7840 + 0xfd77e8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd7844 + 0xfd77fc));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd7848 + 0xfd7810));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

