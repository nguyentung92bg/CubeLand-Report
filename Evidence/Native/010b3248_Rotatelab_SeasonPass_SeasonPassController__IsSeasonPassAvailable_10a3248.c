/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$IsSeasonPassAvailable
bool Rotatelab_SeasonPass_SeasonPassController__IsSeasonPassAvailable (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$IsSeasonPassAvailable
   bool Rotatelab_SeasonPass_SeasonPassController__IsSeasonPassAvailable
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

bool Rotatelab_SeasonPass_SeasonPassController__IsSeasonPassAvailable_10a3248(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_010b32f8 + 0x10b325c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b32fc + 0x10b3270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3300 + 0x10b327c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010b3304 + 0x10b3290) + 0x74) == 0) {
    FUN_00ec3934();
  }
  bVar4 = false;
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  piVar6 = *(int **)(_UNK_010b3308 + 0x10b32c4);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x24) < iVar2) {
    bVar4 = *(char *)(param_1 + 0x30) == '\0';
  }
  return bVar4;
}

