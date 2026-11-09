/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$OnBoosterCancelled
void Rotatelab_Boosters_BaseBoosterController__OnBoosterCancelled (Rotatelab_Boosters_BaseBoosterController_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$OnBoosterCancelled
   void Rotatelab_Boosters_BaseBoosterController__OnBoosterCancelled
   (Rotatelab_Boosters_BaseBoosterController_o* __this, int32_t boosterType, const MethodInfo*
   method); */

void Rotatelab_Boosters_BaseBoosterController__OnBoosterCancelled_1132070(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01142154 + 0x1142088);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142158 + 0x114209c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114215c + 0x11420a8));
    *pcVar4 = '\x01';
  }
  iVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  if (iVar1 != param_2) {
    return;
  }
  piVar3 = *(int **)(_UNK_01142160 + 0x11420d8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_Int32Enum___Remove_261fa54
                    (iVar1,uVar2,**(undefined4 **)(_UNK_01142164 + 0x1142128));
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0114214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
    return;
  }
  return;
}

