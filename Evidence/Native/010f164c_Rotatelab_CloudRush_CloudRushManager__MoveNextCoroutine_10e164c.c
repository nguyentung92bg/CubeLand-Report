/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$MoveNextCoroutine
System_Collections_IEnumerator_o* Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$MoveNextCoroutine
   System_Collections_IEnumerator_o* Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine_10e164c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010f16b8 + 0x10f1660);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f16bc + 0x10f1674));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f16c0 + 0x10f1688));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

