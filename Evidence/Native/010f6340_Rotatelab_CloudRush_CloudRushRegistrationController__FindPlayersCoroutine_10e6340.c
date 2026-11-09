/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$FindPlayersCoroutine
System_Collections_IEnumerator_o* Rotatelab_CloudRush_CloudRushRegistrationController__FindPlayersCoroutine (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$FindPlayersCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_CloudRush_CloudRushRegistrationController__FindPlayersCoroutine
   (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushRegistrationController__FindPlayersCoroutine_10e6340
              (undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010f63ac + 0x10f6354);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f63b0 + 0x10f6368));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f63b4 + 0x10f637c));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

