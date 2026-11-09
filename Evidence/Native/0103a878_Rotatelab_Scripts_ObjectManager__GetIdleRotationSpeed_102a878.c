/* IL2CPP: Rotatelab.Scripts.ObjectManager$$GetIdleRotationSpeed
float Rotatelab_Scripts_ObjectManager__GetIdleRotationSpeed (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$GetIdleRotationSpeed
   float Rotatelab_Scripts_ObjectManager__GetIdleRotationSpeed (Rotatelab_Scripts_ObjectManager_o*
   __this, const MethodInfo* method); */

float Rotatelab_Scripts_ObjectManager__GetIdleRotationSpeed_102a878(void)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  code *pcVar4;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r5;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar9;
  
  pcVar5 = (char *)(_UNK_0103aa44 + 0x103a888);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103aa48 + 0x103a89c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103aa4c + 0x103a8a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103aa50 + 0x103a8b4));
    *pcVar5 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0103aa54 + 0x103a8c8);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar1,0);
  fVar3 = _UNK_0103aa3c;
  if (iVar1 == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar3 = _UNK_0103aa40;
    if (*(char *)(iVar1 + 0x11) == '\0') {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0103aa58 + 0x103a934));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = Rotatelab_Scripts_DockManager__get_ShootingBlasterCount_10044e4(iVar1,0);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0103aa5c + 0x103a964));
      switch(uVar2) {
      case 0:
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar1 + 0x84);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4(iVar1,0);
        }
        break;
      case 1:
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar1 + 0x70);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4(iVar1,0);
        }
        break;
      case 2:
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar1 + 0x74);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4(iVar1,0);
        }
        break;
      case 3:
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar1 + 0x78);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4(iVar1,0);
        }
        break;
      case 4:
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar1 + 0x7c);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4(iVar1,0);
        }
        break;
      default:
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar1 + 0x80);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4(iVar1,0);
        }
      }
      piVar8 = *(int **)(iVar6 + 0x10);
      if (piVar8 != (int *)0x0) {
        pcVar4 = *(code **)(*piVar8 + 0x230);
        fVar3 = (float)(*pcVar4)(piVar8,*(undefined4 *)(*piVar8 + 0x234),pcVar4,extraout_r3,unaff_r4
                                 ,unaff_r5,unaff_r11,unaff_lr);
        fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x18),
                                           (byte)(in_fpscr >> 0x16) & 3);
        return fVar3 / fVar9;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4(iVar6,0);
    }
  }
  return fVar3;
}

