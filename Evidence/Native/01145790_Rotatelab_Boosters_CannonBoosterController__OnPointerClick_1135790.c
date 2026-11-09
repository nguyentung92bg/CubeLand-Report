/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$OnPointerClick
void Rotatelab_Boosters_CannonBoosterController__OnPointerClick (Rotatelab_Boosters_CannonBoosterController_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$OnPointerClick
   void Rotatelab_Boosters_CannonBoosterController__OnPointerClick
   (Rotatelab_Boosters_CannonBoosterController_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void Rotatelab_Boosters_CannonBoosterController__OnPointerClick_1135790(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar5 = (char *)(_UNK_01145bfc + 0x11457b4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c00 + 0x11457c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c04 + 0x11457d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c08 + 0x11457e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c0c + 0x11457ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c10 + 0x11457f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c14 + 0x1145804));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c18 + 0x1145810));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c1c + 0x114581c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c20 + 0x1145828));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c24 + 0x1145834));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145c28 + 0x1145840));
    *pcVar5 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01145c2c + 0x1145854));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  cVar1 = *(char *)(param_2 + 0x131);
  bVar11 = cVar1 == '\0';
  if (bVar11) {
    cVar1 = *(char *)(param_1 + 0x3c);
  }
  if ((bVar11 && cVar1 == '\0') && (*(char *)(param_1 + 0x3d) != '\0')) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01145c30 + 0x11458ac));
    iVar4 = UnityEngine_Camera__get_main_35aede4(0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Camera__ScreenPointToRay_35aedac
              (&piStack_48,iVar4,*(undefined4 *)(param_2 + 0x100),*(undefined4 *)(param_2 + 0x104),0
               ,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = iVar2 + 8;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Grid_GridManager__Raycast_1107a90
                      (iVar3,piStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,iVar4,1,0)
    ;
    if (iVar3 != 0) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Grid_GridRaycastHit__get_Cell_1108cf0(&piStack_48,iVar4,0);
      if (*(int *)(**(int **)(_UNK_01145c34 + 0x1145994) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = UnityEngine_Object__op_Inequality_36018e4(uStack_44,0,0);
      if (iVar3 == 0) {
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Grid_GridRaycastHit__get_Cell_1108cf0(&piStack_48,iVar4,0);
        puVar6 = *(undefined4 **)(_UNK_01145c38 + 0x11459ec);
        iVar3 = thunk_FUN_00f00bc8(piStack_48,*puVar6);
        if ((iVar3 != 0) && (iVar3 = func_0x00b8ae7c(0,*puVar6,iVar3), iVar3 != 0)) {
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Grid_GridRaycastHit__get_Cell_1108cf0(&piStack_48,iVar4,0);
          if (piStack_48 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = (**(code **)(*piStack_48 + 0xf0))(piStack_48,*(undefined4 *)(*piStack_48 + 0xf4));
          if (iVar3 != 0) {
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            Rotatelab_Grid_GridRaycastHit__get_Cell_1108cf0(&piStack_48,iVar4,0);
            uVar9 = *(undefined4 *)(iVar2 + 0x24);
            uVar8 = *(undefined4 *)(iVar2 + 0x28);
            uVar10 = *(undefined4 *)(param_1 + 0x2c);
            if (*(int *)(**(int **)(_UNK_01145c3c + 0x1145aa0) + 0x74) == 0) {
              FUN_00ec3934();
            }
            iVar3 = Rotatelab_Boosters_CannonAoEResolver__TryResolve_1132eac(piStack_48);
            if (iVar3 != 0) {
              piVar7 = *(int **)(_UNK_01145c40 + 0x1145aec);
              iVar3 = *piVar7;
              iVar4 = *(int *)(iVar3 + 0x74);
              *(undefined1 *)(param_1 + 0x3c) = 1;
              if (iVar4 == 0) {
                FUN_00ec3934();
                iVar3 = *piVar7;
              }
              iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0xbc);
              if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              Rotatelab_GameAction_Vector3___Raise_23a3428
                        (iVar3,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                         *(undefined4 *)(iVar2 + 0x1c),**(undefined4 **)(_UNK_01145c44 + 0x1145b3c),
                         uVar9,uVar8,uVar10);
              if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              Rotatelab_Boosters_CannonRig__AimAt_11344d0
                        (*(int *)(param_1 + 0x10),*(undefined4 *)(iVar2 + 0x14),
                         *(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c));
              uVar9 = *(undefined4 *)(param_1 + 0x18);
              uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01145c48 + 0x1145b88));
              System_Action_object____ctor_1f11414
                        (uVar8,iVar2,**(undefined4 **)(_UNK_01145c4c + 0x1145ba8),0);
              if (*(int *)(**(int **)(_UNK_01145c50 + 0x1145bbc) + 0x74) == 0) {
                FUN_00ec3934();
              }
              PrimeTween_Tween__Delay_object__15d6154
                        (&piStack_48,param_1,uVar9,uVar8,0,0,
                         **(undefined4 **)(_UNK_01145c54 + 0x1145be4));
            }
          }
        }
      }
    }
  }
  return;
}

