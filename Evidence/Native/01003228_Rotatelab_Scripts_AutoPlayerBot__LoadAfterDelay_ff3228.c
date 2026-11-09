/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$LoadAfterDelay
System_Collections_IEnumerator_o* Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay (Rotatelab_Scripts_AutoPlayerBot_o* __this, int32_t zeroBasedIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$LoadAfterDelay
   System_Collections_IEnumerator_o* Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay
   (Rotatelab_Scripts_AutoPlayerBot_o* __this, int32_t zeroBasedIndex, const MethodInfo* method); */

int Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay_ff3228(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0100329c + 0x1003240);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010032a0 + 0x1003254));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010032a4 + 0x1003268));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  return iVar1;
}

