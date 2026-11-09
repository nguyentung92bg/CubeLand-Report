/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$OnBoosterStarted
void Rotatelab_Boosters_BaseBoosterController__OnBoosterStarted (Rotatelab_Boosters_BaseBoosterController_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$OnBoosterStarted
   void Rotatelab_Boosters_BaseBoosterController__OnBoosterStarted
   (Rotatelab_Boosters_BaseBoosterController_o* __this, int32_t boosterType, const MethodInfo*
   method); */

void Rotatelab_Boosters_BaseBoosterController__OnBoosterStarted_1131f54(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01142054 + 0x1141f6c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142058 + 0x1141f80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114205c + 0x1141f8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142060 + 0x1141f98));
    *pcVar5 = '\x01';
  }
  iVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  if (iVar1 != param_2) {
    return;
  }
  piVar3 = *(int **)(_UNK_01142064 + 0x1141fc8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  uVar4 = **(undefined4 **)(iVar1 + 0x5c);
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  if (*(int *)(**(int **)(_UNK_01142068 + 0x1142008) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__AddUnique_Int32Enum__148481c
                    (uVar4,uVar2,**(undefined4 **)(_UNK_0114206c + 0x1142028));
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0114204c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
    return;
  }
  return;
}

