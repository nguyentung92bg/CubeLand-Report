/* IL2CPP: Rotatelab.Scripts.BlasterController.<ShootingCoroutine>d__158$$MoveNext
bool Rotatelab_Scripts_BlasterController__ShootingCoroutine_d__158__MoveNext (Rotatelab_Scripts_BlasterController__ShootingCoroutine_d__158_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController.<ShootingCoroutine>d__158$$MoveNext
   bool Rotatelab_Scripts_BlasterController__ShootingCoroutine_d__158__MoveNext
   (Rotatelab_Scripts_BlasterController__ShootingCoroutine_d__158_o* __this, const MethodInfo*
   method); */

undefined4
Rotatelab_Scripts_BlasterController__ShootingCoroutine_d__158__MoveNext_103a8c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_0104ad2c + 0x104a8d8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104ad30 + 0x104a8ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104ad34 + 0x104a8f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104ad38 + 0x104a904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104ad3c + 0x104a910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104ad40 + 0x104a91c));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  if (*(uint *)(param_1 + 8) < 6) {
    piVar9 = *(int **)(param_1 + 0x10);
    switch(*(uint *)(param_1 + 8)) {
    case 0:
      puVar10 = *(undefined4 **)(&UNK_0104a978 + _UNK_0104ad44);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = *(undefined4 *)(iVar3 + 0x14);
      puVar10 = (undefined4 *)(param_1 + 0x14);
      *puVar10 = uVar7;
      while( true ) {
        thunk_FUN_00ec5080(puVar10,uVar7);
        if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x14) + 0xc) < 1) break;
        if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = Rotatelab_Scripts_BlasterController__TryFindTarget_10365a8(piVar9,param_1 + 0x18);
        if (iVar3 == 0) break;
code_r0x0104aaac:
        puVar10 = (undefined4 *)(param_1 + 0x18);
        piVar11 = *(int **)(&UNK_0104aabc + _UNK_0104ad50);
        while( true ) {
          if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = Rotatelab_Scripts_BlasterController__IsTargetableValid_10369e0(piVar9,*puVar10);
          if (iVar3 == 0) break;
          iVar3 = (**(code **)(*piVar9 + 0x138))(piVar9,*(undefined4 *)(*piVar9 + 0x13c));
          if (iVar3 == 0) {
            uVar7 = 0;
            goto code_r0x0104aa80;
          }
          if (piVar9[0x45] < 1) {
            Rotatelab_Scripts_BlasterController___ShootingCoroutine_g__OnBulletsDepleted_158_0_1039144
                      (piVar9);
            return 0;
          }
          piVar8 = (int *)*puVar10;
          if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          (**(code **)(*piVar8 + 0x120))(&uStack_30,piVar8,*(undefined4 *)(*piVar8 + 0x124));
          uVar2 = uStack_28;
          uVar1 = uStack_2c;
          uVar7 = uStack_30;
          (**(code **)(*piVar9 + 0x140))
                    (piVar9,uStack_30,uStack_2c,uStack_28,*(undefined4 *)(*piVar9 + 0x144));
          uVar4 = *puVar10;
          *(undefined1 *)((int)piVar9 + 0xc3) = 1;
          Rotatelab_Scripts_BlasterController__SpawnBullet_1036eb4(piVar9,uVar4,uVar7,uVar1,uVar2);
          (**(code **)(*piVar9 + 0x150))(piVar9,7,*(undefined4 *)(*piVar9 + 0x154));
          iVar3 = *piVar11;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar11;
          }
          iVar5 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x7c);
          if (iVar5 == 0) {
            iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                              (**(undefined4 **)(&UNK_0104ac90 + _UNK_0104ad48));
            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar3 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar3,0)
            ;
            if (iVar3 != 0) {
              if (*(int *)(**(int **)(&UNK_0104acc4 + _UNK_0104ad4c) + 0x74) == 0) {
                FUN_00ec3934();
              }
              uVar7 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3c8b4396,0);
              *(undefined4 *)(param_1 + 0xc) = uVar7;
              thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
              *(undefined4 *)(param_1 + 8) = 1;
              return 1;
            }
            uVar7 = Rotatelab_Scripts_BlasterController__GetShootingDelay_1038a04();
            *(undefined4 *)(param_1 + 0xc) = uVar7;
            thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
            uVar7 = 2;
            goto code_r0x0104ad18;
          }
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar5 = *(int *)(*(int *)(*piVar11 + 0x5c) + 0x7c);
          }
          if (iVar5 == 1) {
            *(undefined4 *)(param_1 + 0xc) = 0;
            thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
            uVar7 = 3;
            goto code_r0x0104ad18;
          }
        }
        uVar7 = 0;
        *puVar10 = 0;
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      uVar7 = 4;
      break;
    default:
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      goto code_r0x0104aaac;
    case 4:
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined1 *)((int)piVar9 + 0xc3) = 0;
      (**(code **)(*piVar9 + 0x150))(piVar9,6,*(undefined4 *)(*piVar9 + 0x154));
      if (piVar9[0x45] < 1) {
        Rotatelab_Scripts_BlasterController___ShootingCoroutine_g__OnBulletsDepleted_158_0_1039144
                  (piVar9);
        return 0;
      }
      (**(code **)(*piVar9 + 0x148))(piVar9,*(undefined4 *)(*piVar9 + 0x14c));
      if (*(int *)(**(int **)(&UNK_0104aa20 + _UNK_0104ad54) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e800000,0);
      *(undefined4 *)(param_1 + 0xc) = uVar7;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
      uVar7 = 5;
      break;
    case 5:
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_BlasterController__SetShootingState_1036330(piVar9,0);
      uVar7 = 1;
code_r0x0104aa80:
      Rotatelab_Scripts_BlasterController__SetShootingState_1036330(piVar9,uVar7);
      return 0;
    }
code_r0x0104ad18:
    *(undefined4 *)(param_1 + 8) = uVar7;
    uVar7 = 1;
  }
  return uVar7;
}

