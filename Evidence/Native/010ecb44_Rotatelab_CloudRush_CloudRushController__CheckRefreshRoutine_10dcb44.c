/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$CheckRefreshRoutine
System_Collections_IEnumerator_o* Rotatelab_CloudRush_CloudRushController__CheckRefreshRoutine (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$CheckRefreshRoutine
   System_Collections_IEnumerator_o* Rotatelab_CloudRush_CloudRushController__CheckRefreshRoutine
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushController__CheckRefreshRoutine_10dcb44(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010ecbb0 + 0x10ecb58);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecbb4 + 0x10ecb6c));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ecbb8 + 0x10ecb80));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

