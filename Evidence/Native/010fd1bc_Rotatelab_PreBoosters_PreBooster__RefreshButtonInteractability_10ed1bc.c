/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$RefreshButtonInteractability
void Rotatelab_PreBoosters_PreBooster__RefreshButtonInteractability (Rotatelab_PreBoosters_PreBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$RefreshButtonInteractability
   void Rotatelab_PreBoosters_PreBooster__RefreshButtonInteractability
   (Rotatelab_PreBoosters_PreBooster_o* __this, const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster__RefreshButtonInteractability_10ed1bc(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  pcVar2 = (char *)(_UNK_010fd30c + 0x10fd1d0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd310 + 0x10fd1e4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  iVar1 = Rotatelab_PreBoosters_PreBooster__get_IsUnlocked_10ebff4(param_1);
  iVar6 = iVar1;
  if ((iVar3 == 10) && (iVar6 = 0, iVar1 != 0)) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010fd314 + 0x10fd22c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = 0;
    if (*(char *)(*(int *)(iVar1 + 0x18) + 0x55) != '\0') {
      iVar6 = 1;
    }
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = 0;
  UnityEngine_UI_Selectable__set_interactable_39c00c0(iVar4,iVar6,0);
  iVar6 = *(int *)(param_1 + 0x40);
  while( true ) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar6 + 0xc) <= (int)uVar8) {
      return;
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar5 = *(int **)(iVar6 + 0x10 + uVar8 * 4);
    if (*(int *)(param_1 + 0x14) == 0) break;
    uVar7 = 0;
    if (*(char *)(*(int *)(param_1 + 0x14) + 0x9c) == '\0') {
      uVar7 = *(undefined4 *)(param_1 + 0x44);
    }
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar5 + 0x1c8))(piVar5,uVar7,*(undefined4 *)(*piVar5 + 0x1cc));
    uVar8 = uVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

