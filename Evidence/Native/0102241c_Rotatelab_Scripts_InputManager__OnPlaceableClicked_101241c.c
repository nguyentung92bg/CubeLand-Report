/* IL2CPP: Rotatelab.Scripts.InputManager$$OnPlaceableClicked
void Rotatelab_Scripts_InputManager__OnPlaceableClicked (Rotatelab_Scripts_InputManager_o* __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029adc24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.InputManager$$OnPlaceableClicked
   void Rotatelab_Scripts_InputManager__OnPlaceableClicked (Rotatelab_Scripts_InputManager_o*
   __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method); */

uint * Rotatelab_Scripts_InputManager__OnPlaceableClicked_101241c(undefined4 param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  float fVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int extraout_r1;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  int iStack_18;
  
  pcVar13 = (char *)(_UNK_01022664 + 0x1022434);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022668 + 0x1022448));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102266c + 0x1022454));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022670 + 0x1022460));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022674 + 0x102246c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022678 + 0x1022478));
    *pcVar13 = '\x01';
  }
  iVar3 = Rotatelab_Boosters_BounceBoosterController__get_IsActive_1132778();
  if (iVar3 != 0) {
    pcVar13 = (char *)(_UNK_0102267c + 0x10224a0);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01022680 + 0x10224b4));
      *pcVar13 = '\x01';
    }
    if (**(char **)(**(int **)(_UNK_01022684 + 0x10224c8) + 0x5c) == '\0') {
      if (param_2 == (int *)0x0) {
        return (uint *)0x0;
      }
      puVar4 = (uint *)**(int **)(_UNK_01022688 + 0x102258c);
      if ((uint)*(byte *)(*param_2 + 0xb8) < (uint)(byte)puVar4[0x2e]) {
        return puVar4;
      }
      if (*(uint **)(*(int *)(*param_2 + 100) + (uint)(byte)puVar4[0x2e] * 4 + -4) != puVar4) {
        return puVar4;
      }
      if ((int *)param_2[0x2f] == (int *)0x0) {
        return puVar4;
      }
      iVar3 = *(int *)param_2[0x2f];
      puVar4 = (uint *)**(int **)(_UNK_0102268c + 0x10225d4);
      if ((uint)*(byte *)(iVar3 + 0xb8) < (uint)(byte)puVar4[0x2e]) {
        return puVar4;
      }
      if (*(uint **)(*(int *)(iVar3 + 100) + (uint)(byte)puVar4[0x2e] * 4 + -4) != puVar4) {
        return puVar4;
      }
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01022690 + 0x1022608));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_1006b94(iVar3,param_2);
      UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar3,uVar5,0);
      if (*(int *)(**(int **)(_UNK_01022694 + 0x1022644) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar13 = (char *)(_UNK_0108ebdc + 0x108eb3c);
      if (*pcVar13 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108ebe0 + 0x108eb50));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108ebe4 + 0x108eb5c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108ebe8 + 0x108eb68));
        *pcVar13 = '\x01';
      }
      piVar11 = *(int **)(_UNK_0108ebec + 0x108eb7c);
      iVar3 = *piVar11;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar11;
      }
      iVar3 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                        (**(undefined4 **)(iVar3 + 0x5c),
                         **(undefined4 **)(_UNK_0108ebf0 + 0x108eba0));
      if (iVar3 != 0) {
        if (*(int *)(**(int **)(_UNK_0108ebf4 + 0x108ebbc) + 0x74) == 0) {
          FUN_00ec3934();
        }
        pcVar13 = (char *)(_UNK_029aa0d4 + 0x29a9f04);
        if (*pcVar13 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0d8 + 0x29a9f18),0);
          FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0dc + 0x29a9f24));
          FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0e0 + 0x29a9f30));
          FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0e4 + 0x29a9f3c));
          *pcVar13 = '\x01';
        }
        piVar11 = *(int **)(_UNK_029aa0e8 + 0x29a9f50);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        pcVar13 = (char *)(_UNK_029aa0ec + 0x29a9f6c);
        if (*pcVar13 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0f0 + 0x29a9f80));
          *pcVar13 = '\x01';
        }
        iVar3 = *piVar11;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar11;
        }
        if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x1c) == '\0') {
          return (uint *)0x0;
        }
        if (*(int *)(**(int **)(_UNK_029aa0f4 + 0x29a9fc8) + 0x74) == 0) {
          FUN_00ec3934();
        }
        Lofelt_NiceVibrations_HapticPatterns__GetPresetForType_299bf8c(&stack0xffffffe4,5);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = Lofelt_NiceVibrations_HapticController__Init_29988b0();
        if (iVar3 == 0) {
          piVar11 = *(int **)(_UNK_029aa0f8 + 0x29aa048);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            FUN_00ec3934();
          }
          pcVar13 = (char *)(_UNK_029aa0fc + 0x29aa064);
          if (*pcVar13 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_029aa100 + 0x29aa078));
            *pcVar13 = '\x01';
          }
          iVar3 = *piVar11;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar11;
          }
          if (*(char *)(*(int *)(iVar3 + 0x5c) + 9) == '\0') {
            return (uint *)0x0;
          }
          if (*(int *)(**(int **)(_UNK_029aa104 + 0x29aa0b4) + 0x74) == 0) {
            FUN_00ec3934();
          }
          pcVar13 = (char *)(_UNK_029abc00 + 0x29abb78);
          if (*pcVar13 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_029abc04 + 0x29abb8c));
            FUN_00ec37c0(*(undefined4 *)(_UNK_029abc08 + 0x29abb98));
            *pcVar13 = '\x01';
          }
          piVar11 = *(int **)(_UNK_029abc0c + 0x29abbac);
          iVar3 = *piVar11;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar11;
          }
          uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
          if (*(int *)(**(int **)(_UNK_029abc10 + 0x29abbcc) + 0x74) == 0) {
            FUN_00ec3934(**(int **)(_UNK_029abc10 + 0x29abbcc));
          }
          pcVar13 = (char *)(_UNK_029adc68 + 0x29adb0c);
          if (*pcVar13 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_029adc6c + 0x29adb20));
            FUN_00ec37c0(*(undefined4 *)(_UNK_029adc70 + 0x29adb2c));
            *pcVar13 = '\x01';
          }
          piVar11 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_029adc74 + 0x29adb44),1);
          if (piVar11 != (int *)0x0) {
            if ((iStack_18 != 0) &&
               (iVar3 = thunk_FUN_00f00bc8(iStack_18,*(undefined4 *)(*piVar11 + 0x20)), iVar3 == 0))
            {
              uVar9 = thunk_FUN_00f08b98();
              func_0x00ec3920(uVar9,0);
            }
            if (piVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            piVar11[4] = iStack_18;
            thunk_FUN_00ec5080(piVar11 + 4,iStack_18);
            uVar9 = UnityEngine_AndroidJNIHelper__CreateJNIArgArray_3576fec(piVar11,0);
            if (*(int *)(**(int **)(_UNK_029adc78 + 0x29adbdc) + 0x74) == 0) {
              FUN_00ec3934();
            }
            Lofelt_NiceVibrations_JNIHelpers__Call_299d73c(uVar5,uVar8,uVar9);
            puVar4 = (uint *)UnityEngine_AndroidJNIHelper__DeleteJNIArgArray_3577a4c
                                       (piVar11,uVar9,0);
            return puVar4;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        Lofelt_NiceVibrations_HapticController__Load_299959c(0);
        Lofelt_NiceVibrations_HapticController__Loop_299a5f0(0);
        pcVar13 = (char *)(_UNK_029a9d58 + 0x29a9990);
        if (*pcVar13 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d5c + 0x29a99a4));
          FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d60 + 0x29a99b0));
          FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d64 + 0x29a99bc));
          FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d68 + 0x29a99c8));
          *pcVar13 = '\x01';
        }
        piVar11 = *(int **)(_UNK_029a9d6c + 0x29a99dc);
        puVar4 = (uint *)*piVar11;
        if (puVar4[0x1d] == 0) {
          FUN_00ec3934();
          puVar4 = (uint *)*piVar11;
        }
        if (*(char *)(puVar4[0x17] + 0x1c) == '\0') {
          return puVar4;
        }
        if (puVar4[0x1d] == 0) {
          FUN_00ec3934();
        }
        iVar3 = Lofelt_NiceVibrations_HapticController__Init_29988b0();
        if (iVar3 == 0) {
          piVar12 = *(int **)(_UNK_029a9d80 + 0x29a9af8);
          if (*(int *)(*piVar12 + 0x74) == 0) {
            FUN_00ec3934();
          }
          pcVar13 = (char *)(_UNK_029a9d84 + 0x29a9b14);
          if (*pcVar13 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d88 + 0x29a9b28));
            *pcVar13 = '\x01';
          }
          iVar3 = *piVar12;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar12;
          }
          bVar14 = 0;
          fVar6 = _UNK_029a9d50;
          if (*(char *)(*(int *)(iVar3 + 0x5c) + 9) != '\0') {
            if (*(int *)(*piVar11 + 0x74) == 0) {
              FUN_00ec3934();
            }
            pcVar13 = (char *)(_UNK_029a9d8c + 0x29a9b7c);
            if (*pcVar13 == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d90 + 0x29a9b90));
              *pcVar13 = '\x01';
            }
            iVar3 = *piVar11;
            if (*(int *)(iVar3 + 0x74) == 0) {
              FUN_00ec3934();
              iVar3 = *piVar11;
            }
            uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
            if (*(int *)(**(int **)(_UNK_029a9d94 + 0x29a9bbc) + 0x74) == 0) {
              FUN_00ec3934(**(int **)(_UNK_029a9d94 + 0x29a9bbc));
            }
            fVar6 = (float)Lofelt_NiceVibrations_HapticPatterns__GetPresetDuration_2999e44(uVar5);
            if (*pcVar13 == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d98 + 0x29a9bfc));
              *pcVar13 = '\x01';
            }
            iVar3 = *piVar11;
            if (*(int *)(iVar3 + 0x74) == 0) {
              FUN_00ec3934();
              iVar3 = *piVar11;
            }
            Lofelt_NiceVibrations_HapticPatterns__PlayPreset_2999eec
                      (*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18));
          }
        }
        else {
          iVar3 = *piVar11;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar11;
          }
          fVar17 = *(float *)(*(int *)(iVar3 + 0x5c) + 8) -
                   *(float *)(*(int *)(iVar3 + 0x5c) + 0x10);
          piVar12 = *(int **)(_UNK_029a9d70 + 0x29a9a54);
          fVar6 = _UNK_029a9d50;
          if (0.0 < fVar17) {
            fVar6 = fVar17;
          }
          if (*(int *)(*piVar12 + 0x74) == 0) {
            FUN_00ec3934();
          }
          pcVar13 = (char *)(_UNK_029a9d74 + 0x29a9a7c);
          if (*pcVar13 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d78 + 0x29a9a90));
            *pcVar13 = '\x01';
          }
          iVar3 = *piVar12;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar12;
          }
          bVar14 = *(byte *)(*(int *)(iVar3 + 0x5c) + 0xc);
          if (*(int *)(**(int **)(_UNK_029a9d7c + 0x29a9abc) + 0x74) == 0) {
            FUN_00ec3934(**(int **)(_UNK_029a9d7c + 0x29a9abc));
          }
          Lofelt_NiceVibrations_LofeltHaptics__Play_2999d9c();
        }
        iVar3 = *piVar11;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar11;
        }
        iVar10 = *(int *)(iVar3 + 0x5c);
        iVar3 = *(int *)(iVar10 + 0x2c);
        *(byte *)(iVar10 + 0x16) = *(byte *)(iVar10 + 0x15) & bVar14;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
        }
        iVar10 = *piVar11;
        iVar3 = *(int *)(iVar10 + 0x74);
        if (0.0 < fVar6) {
          if (iVar3 == 0) {
            FUN_00ec3934();
            iVar10 = *piVar11;
            iVar3 = extraout_r1;
          }
          iVar10 = *(int *)(*(int *)(iVar10 + 0x5c) + 4);
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Timers_Timer__set_Interval_31314dc
                    (iVar10,iVar3,SUB84((double)(fVar6 * _UNK_029a9d54),0),
                     (int)((ulonglong)(double)(fVar6 * _UNK_029a9d54) >> 0x20));
          iVar3 = *(int *)(*(int *)(*piVar11 + 0x5c) + 4);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Timers_Timer__set_AutoReset_3130fbc(iVar3,0,0);
          iVar3 = *(int *)(*(int *)(*piVar11 + 0x5c) + 4);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          bVar2 = *(char *)(*(int *)(*piVar11 + 0x5c) + 0x16) == '\0';
          puVar4 = (uint *)(uint)bVar2;
          pcVar13 = (char *)(iRam0314127c + 0x3141080);
          if (*pcVar13 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03141280 + 0x3141094),puVar4,0);
            thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03141284 + 0x31410a0));
            *pcVar13 = '\x01';
          }
          puVar7 = (uint *)System_ComponentModel_Component__get_DesignMode_31878f0(iVar3,0);
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)(uint)*(byte *)(iVar3 + 0x21);
            if (puVar7 == (uint *)0x0) {
              if ((uint *)(uint)*(byte *)(iVar3 + 0x20) == puVar4) {
                return (uint *)(uint)*(byte *)(iVar3 + 0x20);
              }
              if (puVar4 == (uint *)0x0) {
                piVar11 = (int *)(iVar3 + 0x34);
                puVar4 = (uint *)0x0;
                if (*piVar11 != 0) {
                  *(undefined4 *)(iVar3 + 0x3c) = 0;
                  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x3c),0);
                  if (*(int *)(iVar3 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  System_Threading_Timer__Dispose_2bf055c(*(int *)(iVar3 + 0x34),0);
                  *piVar11 = 0;
                  puVar4 = (uint *)thunk_FUN_00ec5080(piVar11,0);
                }
                *(bool *)(iVar3 + 0x20) = bVar2;
                return puVar4;
              }
              puVar4 = (uint *)(iVar3 + 0x34);
              *(bool *)(iVar3 + 0x20) = bVar2;
              if (*puVar4 != 0) {
                iVar10 = System_Timers_Timer__CalculateRoundedInterval_3131298
                                   ((int)*(undefined8 *)(iVar3 + 0x18),
                                    (int)((ulonglong)*(undefined8 *)(iVar3 + 0x18) >> 0x20),0);
                if (*(int *)(iVar3 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                System_Threading_Timer__Change_2bf0134
                          (*(int *)(iVar3 + 0x34),iVar10,iVar10,iVar10 >> 0x1f);
                return (uint *)0x1;
              }
              if (*(char *)(iVar3 + 0x30) != '\0') {
                piVar11 = (int *)System_Object__GetType_2bb9c9c(iVar3,0);
                thunk_FUN_00b87610();
                uVar5 = (**(code **)(*piVar11 + 0x100))(piVar11,*(undefined4 *)(*piVar11 + 0x104));
                thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_03141290 + 0x314124c));
                uVar8 = thunk_FUN_00f00cdc();
                System_ObjectDisposedException___ctor_2b80700(uVar8,uVar5,0);
                uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_03141294 + 0x314126c));
                FUN_01f4fe28(uVar8,uVar5);
                    /* WARNING: Subroutine does not return */
                FUN_01f4fe2c();
              }
              uVar8 = System_Timers_Timer__CalculateRoundedInterval_3131298
                                ((int)*(undefined8 *)(iVar3 + 0x18),
                                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x18) >> 0x20),0);
              uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_03141288 + 0x314119c));
              System_Object___ctor_2bb93bc(uVar5,0);
              *(undefined4 *)(iVar3 + 0x3c) = uVar5;
              thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x3c),uVar5);
              uVar15 = *(undefined4 *)(iVar3 + 0x38);
              uVar16 = *(undefined4 *)(iVar3 + 0x3c);
              cVar1 = *(char *)(iVar3 + 0x28);
              uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0314128c + 0x31411d0));
              uVar5 = uVar8;
              if (cVar1 == '\0') {
                uVar5 = 0xffffffff;
              }
              System_Threading_Timer___ctor_2befeec(uVar9,uVar15,uVar16,uVar8,uVar5,0);
              *(undefined4 *)(iVar3 + 0x34) = uVar9;
              if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
                return puVar4;
              }
              puVar7 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
              do {
                bVar2 = (bool)hasExclusiveAccess(puVar7);
              } while (!bVar2);
              *puVar7 = *puVar7 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
              return puVar7;
            }
          }
          else {
            *(bool *)(iVar3 + 0x20) = bVar2;
          }
          *(bool *)(iVar3 + 0x22) = bVar2;
          return puVar7;
        }
        if (iVar3 == 0) {
          FUN_00ec3934();
        }
        pcVar13 = (char *)(_UNK_029a996c + 0x29a98d4);
        if (*pcVar13 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_029a9970 + 0x29a98e8));
          *pcVar13 = '\x01';
        }
        piVar11 = *(int **)(_UNK_029a9974 + 0x29a98fc);
        iVar3 = *piVar11;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar11;
        }
        iVar3 = *(int *)(iVar3 + 0x5c);
        *(undefined1 *)(iVar3 + 0x16) = 0;
        *(undefined4 *)(iVar3 + 0x10) = 0;
        if (*(int *)(iVar3 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Timers_Timer__set_Enabled_3131064(*(int *)(iVar3 + 4),0,0);
        iVar3 = *(int *)(*(int *)(*piVar11 + 0x5c) + 0x30);
        if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029a9964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (uint *)(**(code **)(iVar3 + 0xc))
                                     (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
          return puVar4;
        }
        return (uint *)0x0;
      }
      return (uint *)0x0;
    }
  }
  iVar3 = Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable_1046d14
                    (param_2,&stack0xffffffec,0);
  puVar4 = (uint *)0x0;
  if (iVar3 != 0) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01022698 + 0x10224fc));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Scripts_DockManager__TryPlaceBlaster_1005ad4(iVar3,0);
    puVar4 = (uint *)0x0;
    if (iVar3 != 0) {
      if (*(int *)(**(int **)(_UNK_0102269c + 0x1022534) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Scripts_LevelMovePathRecorder__RecordPlacement_10126a4(0);
      if (*(int *)(**(int **)(_UNK_010226a0 + 0x102255c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      puVar4 = (uint *)Rotatelab_Vibration_VibrationManager__VibrateMedium_107eb2c(0);
    }
  }
  return puVar4;
}

