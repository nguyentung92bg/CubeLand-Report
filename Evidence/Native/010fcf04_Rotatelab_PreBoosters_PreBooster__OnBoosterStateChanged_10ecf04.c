/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnBoosterStateChanged
void Rotatelab_PreBoosters_PreBooster__OnBoosterStateChanged (Rotatelab_PreBoosters_PreBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnBoosterStateChanged
   void Rotatelab_PreBoosters_PreBooster__OnBoosterStateChanged (Rotatelab_PreBoosters_PreBooster_o*
   __this, const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster__OnBoosterStateChanged_10ecf04(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  longlong lVar16;
  
  pcVar5 = (char *)(_UNK_010fd164 + 0x10fcf20);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd168 + 0x10fcf34));
    *pcVar5 = '\x01';
  }
  iVar3 = 0x3c;
  if (*(char *)(param_1 + 0x48) == '\0') {
    iVar3 = 0x38;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + iVar3),0);
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar15 = Rotatelab_PreBoosters_PreBooster__get_RemainingUsages_10ebf68(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = FUN_00f88368((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  uVar6 = 0;
  TMPro_TMP_Text__SetText_34ffc34(iVar3,**(undefined4 **)(_UNK_010fd16c + 0x10fcfb4),uVar1,0);
  iVar3 = *(int *)(param_1 + 0x28);
  uVar2 = Rotatelab_PreBoosters_PreBooster__get_IsUnlocked_10ebff4(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,uVar2 ^ 1,0);
  iVar9 = *(int *)(param_1 + 0x24);
  iVar3 = Rotatelab_PreBoosters_PreBooster__get_IsUnlocked_10ebff4(param_1);
  if (iVar3 != 0) {
    uVar15 = Rotatelab_PreBoosters_PreBooster__get_RemainingUsages_10ebf68(param_1);
    iVar3 = (int)((ulonglong)uVar15 >> 0x20);
    bVar10 = (int)uVar15 != 0;
    uVar6 = 0;
    if ((int)-(iVar3 + (uint)bVar10) < 0 != (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)bVar10))) {
      uVar6 = 1;
    }
  }
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar10 = false;
  UnityEngine_GameObject__SetActive_3602038(iVar9,uVar6,0);
  iVar9 = *(int *)(param_1 + 0x20);
  iVar3 = Rotatelab_PreBoosters_PreBooster__get_IsUnlocked_10ebff4(param_1);
  if (iVar3 != 0) {
    lVar16 = Rotatelab_PreBoosters_PreBooster__get_RemainingUsages_10ebf68(param_1);
    bVar10 = lVar16 == 0;
  }
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar9,bVar10,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x1c),0);
  pcVar5 = (char *)(_UNK_010fd170 + 0x10fd0a4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd174 + 0x10fd0b8));
    *pcVar5 = '\x01';
  }
  iVar9 = *(int *)(**(int **)(_UNK_010fd178 + 0x10fd0cc) + 0x5c);
  fVar11 = *(float *)(iVar9 + 0xc);
  fVar12 = *(float *)(iVar9 + 0x10);
  fVar13 = *(float *)(iVar9 + 0x14);
  iVar9 = Rotatelab_PreBoosters_PreBooster__get_IsUnlocked_10ebff4(param_1);
  if (iVar9 == 0) {
    fVar14 = 0.5;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar14 = 1.0;
    if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 10) {
      fVar14 = _UNK_010fd160;
    }
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar3,fVar11 * fVar14,fVar12 * fVar14,fVar13 * fVar14,0);
  pcVar5 = (char *)(_UNK_010fd30c + 0x10fd1d0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd310 + 0x10fd1e4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  iVar9 = Rotatelab_PreBoosters_PreBooster__get_IsUnlocked_10ebff4(param_1);
  iVar3 = iVar9;
  if ((iVar4 == 10) && (iVar3 = 0, iVar9 != 0)) {
    iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010fd314 + 0x10fd22c));
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = 0;
    if (*(char *)(*(int *)(iVar9 + 0x18) + 0x55) != '\0') {
      iVar3 = 1;
    }
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = 0;
  UnityEngine_UI_Selectable__set_interactable_39c00c0(iVar7,iVar3,0);
  iVar3 = *(int *)(param_1 + 0x40);
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar2) {
      return;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar8 = *(int **)(iVar3 + 0x10 + uVar2 * 4);
    if (*(int *)(param_1 + 0x14) == 0) break;
    uVar1 = 0;
    if (*(char *)(*(int *)(param_1 + 0x14) + 0x9c) == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x44);
    }
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar8 + 0x1c8))(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x1cc));
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

