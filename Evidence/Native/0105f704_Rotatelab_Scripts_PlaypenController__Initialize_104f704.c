/* IL2CPP: Rotatelab.Scripts.PlaypenController$$Initialize
void Rotatelab_Scripts_PlaypenController__Initialize (Rotatelab_Scripts_PlaypenController_o* __this, Rotatelab_PlaypenData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaypenController$$Initialize
   void Rotatelab_Scripts_PlaypenController__Initialize (Rotatelab_Scripts_PlaypenController_o*
   __this, Rotatelab_PlaypenData_o* data, const MethodInfo* method); */

void Rotatelab_Scripts_PlaypenController__Initialize_104f704(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_0105f9a4 + 0x105f720);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f9a8 + 0x105f734));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f9ac + 0x105f740));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f9b0 + 0x105f74c));
    *pcVar6 = '\x01';
  }
  *(int *)(param_1 + 0x10) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x10),param_2);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  iVar7 = *(int *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar7 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = 0;
  Rotatelab_HpTextData__get_Rotation_1070db8(&uStack_34,*(int *)(iVar7 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetLocalPositionAndRotation_3615d88
            (iVar1,uVar2,uVar3,uVar4,uStack_34,uStack_30,uStack_2c,uStack_28,0);
  puVar9 = *(undefined4 **)(_UNK_0105f9b4 + 0x105f818);
  while( true ) {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x14) + 0xc) <= (int)uVar8) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0105f9b8 + 0x105f970));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Grid_GridManager__AddToGrid_1106f50(iVar1,param_1,*(undefined4 *)(param_2 + 0x2c),0)
      ;
      return;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x14),uVar8,*puVar9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ScrewController__Initialize_104f9bc(iVar1,param_1);
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x14),uVar8,*puVar9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ScrewController__SetupHp_104fa68(iVar1,*(undefined4 *)(param_2 + 0x24));
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar5 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (*(int *)(param_1 + 0x14),uVar8,*puVar9);
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar1 == 0) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar5 + 0x108))
              (piVar5,*(undefined4 *)(iVar1 + uVar8 * 4 + 0x10),*(undefined4 *)(*piVar5 + 0x10c));
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x14),uVar8,*puVar9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BaseTargetableController__SetVisibility_ff5974(iVar1,1,0);
    uVar8 = uVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

