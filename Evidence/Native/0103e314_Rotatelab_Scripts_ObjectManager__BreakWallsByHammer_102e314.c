/* IL2CPP: Rotatelab.Scripts.ObjectManager$$BreakWallsByHammer
void Rotatelab_Scripts_ObjectManager__BreakWallsByHammer (Rotatelab_Scripts_ObjectManager_o* __this, Rotatelab_Scripts_WallController_o* targetWall, System_Collections_Generic_List_WallController__o* wallsToBreak, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$BreakWallsByHammer
   void Rotatelab_Scripts_ObjectManager__BreakWallsByHammer (Rotatelab_Scripts_ObjectManager_o*
   __this, Rotatelab_Scripts_WallController_o* targetWall,
   System_Collections_Generic_List_WallController__o* wallsToBreak, float duration, const
   MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__BreakWallsByHammer_102e314
               (int param_1,int param_2,int param_3,float param_4)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  float fStack_60;
  
  pcVar7 = (char *)(_UNK_0103e7a8 + 0x103e340);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7ac + 0x103e354));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7b0 + 0x103e360));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7b4 + 0x103e36c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7b8 + 0x103e378));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7bc + 0x103e384));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7c0 + 0x103e390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7c4 + 0x103e39c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7c8 + 0x103e3a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7cc + 0x103e3b4));
    *pcVar7 = '\x01';
  }
  uVar9 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(**(int **)(_UNK_0103e7d0 + 0x103e3c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar9,0,0);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x60) + 0xc);
    if (iVar3 != 0) {
      if (param_3 != 0) {
        iVar3 = *(int *)(param_3 + 0xc);
      }
      if (param_3 != 0 && iVar3 != 0) {
        iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                          (param_3,iVar3 + -1,**(undefined4 **)(_UNK_0103e7d4 + 0x103e434));
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_position_36149b0(&uStack_68,iVar3,0);
        fVar11 = fStack_60;
        uVar12 = uStack_68;
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = UnityEngine_Component__get_transform_35fe190(param_2,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_position_36149b0(&uStack_68,iVar3,0);
        fVar10 = fStack_60;
        uVar1 = uStack_68;
        if (*(char *)(_UNK_0103e7d8 + 0x103e4d8) == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7dc + 0x103e4f0));
          *(undefined1 *)(_UNK_0103e7e0 + 0x103e500) = 1;
        }
        if (*(int *)(**(int **)(_UNK_0103e7e4 + 0x103e50c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar12 = FloatVectorSub(uVar12,uVar1,2,0x20);
        uVar12 = FloatVectorMult(uVar12,uVar12,2,0x20);
        fVar10 = SQRT((float)uVar12 + (float)((ulonglong)uVar12 >> 0x20) +
                      (fVar11 - fVar10) * (fVar11 - fVar10));
        fVar11 = 1.0;
        if (0.0 < fVar10) {
          fVar11 = fVar10;
        }
        if (*(int *)(**(int **)(_UNK_0103e7e8 + 0x103e534) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar9 = DG_Tweening_DOTween__Sequence_1167c00(0);
        if (0 < *(int *)(param_3 + 0xc)) {
          iVar3 = 0;
          do {
            iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103e7ec + 0x103e58c));
            System_Object___ctor_2bb93bc(iVar4,0);
            iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                              (param_3,iVar3,**(undefined4 **)(_UNK_0103e7f0 + 0x103e5ac));
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            piVar8 = (int *)(iVar4 + 8);
            *piVar8 = iVar5;
            thunk_FUN_00ec5080(piVar8,iVar5);
            if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar5 = UnityEngine_Component__get_transform_35fe190(*piVar8,0);
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            UnityEngine_Transform__get_position_36149b0(&uStack_68,iVar5,0);
            fVar10 = fStack_60;
            uVar12 = uStack_68;
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar5 = UnityEngine_Component__get_transform_35fe190(param_2,0);
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            UnityEngine_Transform__get_position_36149b0(&uStack_68,iVar5,0);
            fVar2 = fStack_60;
            uVar1 = uStack_68;
            if (*(char *)(_UNK_0103e7f4 + 0x103e670) == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_0103e7f8 + 0x103e684));
              *(undefined1 *)(_UNK_0103e7fc + 0x103e694) = 1;
            }
            if (*(int *)(**(int **)(_UNK_0103e800 + 0x103e6a0) + 0x74) == 0) {
              FUN_00ec3934();
            }
            uVar12 = FloatVectorSub(uVar12,uVar1,2,0x20);
            uVar12 = FloatVectorMult(uVar12,uVar12,2,0x20);
            fVar10 = (float)DG_Tweening_DOVirtual__EasedValue_1168508
                                      (0,0x3f800000,
                                       SQRT((float)uVar12 + (float)((ulonglong)uVar12 >> 0x20) +
                                            (fVar10 - fVar2) * (fVar10 - fVar2)) / fVar11,6,0);
            uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103e804 + 0x103e6f4));
            DG_Tweening_TweenCallback___ctor_11657e8
                      (uVar6,iVar4,**(undefined4 **)(_UNK_0103e808 + 0x103e710),0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_116d148
                      (uVar9,fVar10 * param_4,uVar6,0);
            if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Collections_Generic_List_object___Remove_267f138
                      (*(int *)(param_1 + 0x60),*(undefined4 *)(iVar4 + 8),
                       **(undefined4 **)(_UNK_0103e80c + 0x103e75c));
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_3 + 0xc));
        }
        uVar9 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar9,0x3f19999a,0);
        Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_object__1490074
                  (uVar9,**(undefined4 **)(_UNK_0103e810 + 0x103e794));
      }
    }
  }
  return;
}

