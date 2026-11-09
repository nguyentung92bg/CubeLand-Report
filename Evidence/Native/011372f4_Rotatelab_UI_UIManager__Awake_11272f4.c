/* IL2CPP: Rotatelab.UI.UIManager$$Awake
void Rotatelab_UI_UIManager__Awake (Rotatelab_UI_UIManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIManager$$Awake
   void Rotatelab_UI_UIManager__Awake (Rotatelab_UI_UIManager_o* __this, const MethodInfo* method);
    */

void Rotatelab_UI_UIManager__Awake_11272f4(int param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r5;
  int iVar5;
  int *piVar6;
  undefined4 unaff_r6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_r7;
  int *piVar9;
  undefined4 unaff_r8;
  
  pcVar2 = (char *)(_UNK_01137484 + 0x113730c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137488 + 0x1137320));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113748c + 0x113732c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137490 + 0x1137338));
    *pcVar2 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01137494 + 0x113734c));
  iVar7 = *(int *)(param_1 + 0x30);
  uVar3 = 0;
  while( true ) {
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar3) {
      iVar7 = UnityEngine_Component__GetComponentsInChildren_object__143fea0
                        (param_1,**(undefined4 **)(_UNK_01137498 + 0x11373b0));
      piVar6 = (int *)(param_1 + 0x10);
      *piVar6 = iVar7;
      thunk_FUN_00ec5080(piVar6,iVar7);
      iVar7 = *piVar6;
      uVar3 = 0;
      while( true ) {
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar3) {
          iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_0113749c + 0x113742c));
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar3 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar7,0);
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_UI_UIManager__SetMainCanvas_1126b6c(param_1,uVar3 ^ 1,0,0);
          pcVar2 = (char *)(_UNK_0113790c + 0x1137704);
          if (*pcVar2 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_01137910 + 0x1137718));
            FUN_00ec37c0(*(undefined4 *)(_UNK_01137914 + 0x1137724));
            FUN_00ec37c0(*(undefined4 *)(_UNK_01137918 + 0x1137730));
            FUN_00ec37c0(*(undefined4 *)(_UNK_0113791c + 0x113773c));
            FUN_00ec37c0(*(undefined4 *)(_UNK_01137920 + 0x1137748));
            FUN_00ec37c0(*(undefined4 *)(_UNK_01137924 + 0x1137754));
            *pcVar2 = '\x01';
          }
          piVar6 = *(int **)(_UNK_01137928 + 0x1137768);
          uVar8 = *(undefined4 *)(param_1 + 0x30);
          iVar7 = *piVar6;
          if (*(int *)(iVar7 + 0x74) == 0) {
            FUN_00ec3934();
            iVar7 = *piVar6;
          }
          puVar1 = *(undefined4 **)(iVar7 + 0x5c);
          iVar5 = puVar1[1];
          if (iVar5 == 0) {
            if (*(int *)(iVar7 + 0x74) == 0) {
              FUN_00ec3934();
              puVar1 = *(undefined4 **)(*piVar6 + 0x5c);
            }
            uVar4 = *puVar1;
            iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113792c + 0x11377b4));
            System_Func_object__Int32Enum__bool____ctor_239e560
                      (iVar5,uVar4,**(undefined4 **)(_UNK_01137930 + 0x11377d4),0);
            piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
            *piVar6 = iVar5;
            thunk_FUN_00ec5080(piVar6,iVar5);
          }
          if (*(int *)(**(int **)(_UNK_01137934 + 0x11377fc) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar7 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                            (uVar8,1,iVar5,**(undefined4 **)(_UNK_01137938 + 0x1137820),unaff_r4,
                             unaff_r5,unaff_r6,unaff_r7,unaff_r8);
          piVar6 = *(int **)(_UNK_0113793c + 0x113783c);
          piVar9 = (int *)(param_1 + 0x34);
          iVar5 = *piVar9;
          if (*(int *)(*piVar6 + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar5 = UnityEngine_Object__op_Equality_36033f4(iVar7,iVar5,0);
          if (iVar5 == 0) {
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar5 = Rotatelab_UI_PageButtonBase__SetPageEnable_1128454(iVar7,1);
            if (iVar5 != 0) {
              iVar5 = *piVar9;
              if (*(int *)(*piVar6 + 0x74) == 0) {
                FUN_00ec3934();
              }
              iVar5 = UnityEngine_Object__op_Inequality_36018e4(iVar5,0,0);
              if (iVar5 != 0) {
                if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                Rotatelab_UI_PageButtonBase__SetPageEnable_1128454(*piVar9,0);
              }
              *(int *)(param_1 + 0x34) = iVar7;
              thunk_FUN_00ec5080(piVar9,iVar7);
              iVar7 = *(int *)(param_1 + 0x38);
              if (iVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01137904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(iVar7 + 0xc))
                          (*(undefined4 *)(iVar7 + 0x20),1,*(undefined4 *)(iVar7 + 0x14));
                return;
              }
            }
          }
          return;
        }
        if (*(uint *)(iVar7 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar5 = *(int *)(iVar7 + 0x10 + uVar3 * 4);
        if (iVar5 == 0) break;
        Rotatelab_UI_MainCanvasBase__SetCanvasEnable_1127660(iVar5,0);
        uVar3 = uVar3 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar7 + 0x10 + uVar3 * 4);
    if (iVar5 == 0) break;
    Rotatelab_UI_PageButtonBase__Initialize_11274a0(iVar5);
    uVar3 = uVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

