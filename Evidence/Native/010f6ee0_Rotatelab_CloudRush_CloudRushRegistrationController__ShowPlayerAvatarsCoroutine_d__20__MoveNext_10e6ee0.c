/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController.<ShowPlayerAvatarsCoroutine>d__20$$MoveNext
bool Rotatelab_CloudRush_CloudRushRegistrationController__ShowPlayerAvatarsCoroutine_d__20__MoveNext (Rotatelab_CloudRush_CloudRushRegistrationController__ShowPlayerAvatarsCoroutine_d__20_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.CloudRush.CloudRushRegistrationController.<ShowPlayerAvatarsCoroutine>d__20$$MoveNext
   bool 
   Rotatelab_CloudRush_CloudRushRegistrationController__ShowPlayerAvatarsCoroutine_d__20__MoveNext
   (Rotatelab_CloudRush_CloudRushRegistrationController__ShowPlayerAvatarsCoroutine_d__20_o* __this,
   const MethodInfo* method); */

undefined4
Rotatelab_CloudRush_CloudRushRegistrationController__ShowPlayerAvatarsCoroutine_d__20__MoveNext_10e6ee0
          (int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  pcVar1 = (char *)(_UNK_010f7034 + 0x10f6ef8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7038 + 0x10f6f0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f703c + 0x10f6f18));
    *pcVar1 = '\x01';
  }
  uVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar3;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar3 < *(int *)(*(int *)(iVar4 + 0x30) + 0xc)) {
    if (*(int *)(iVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar4 + 0x30),*(undefined4 *)(param_1 + 0x18),
                       **(undefined4 **)(_UNK_010f7040 + 0x10f6fb0));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushPlayerAvatarController__ShowInRegistration_10e5e70(iVar3);
    if (*(int *)(iVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(iVar4 + 0x30) + 0xc),
                                       (byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x18) + 1,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine_10e6410
                      (iVar4,*(undefined4 *)(param_1 + 0x14),fVar6 / fVar5);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
    uVar2 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar2;
}

