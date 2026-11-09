/* IL2CPP: Rotatelab.Scripts.LevelManager.<LoadRemoteLevelsAsync>d__49<object>$$MoveNext
void Rotatelab_Scripts_LevelManager__LoadRemoteLevelsAsync_d__49_object___MoveNext (Rotatelab_Scripts_LevelManager__LoadRemoteLevelsAsync_d__49_object__o __this, const MethodInfo_17962AC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager.<LoadRemoteLevelsAsync>d__49<object>$$MoveNext
   void Rotatelab_Scripts_LevelManager__LoadRemoteLevelsAsync_d__49_object___MoveNext
   (Rotatelab_Scripts_LevelManager__LoadRemoteLevelsAsync_d__49_object__o __this, const
   MethodInfo_17962AC* method); */

void Rotatelab_Scripts_LevelManager__LoadRemoteLevelsAsync_d__49_object___MoveNext_17962ac
               (int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 uStack_68;
  int iStack_60;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int iStack_48;
  undefined8 uStack_40;
  int iStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_017a7078 + 0x17a62c8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a707c + 0x17a62dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a7080 + 0x17a62e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a7084 + 0x17a62f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a7088 + 0x17a6300));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a708c + 0x17a630c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a7090 + 0x17a6318));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a7094 + 0x17a6324));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a7098 + 0x17a6330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a709c + 0x17a633c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a70a0 + 0x17a6348));
    *pcVar6 = '\x01';
  }
  iVar3 = *param_1;
  uStack_30 = 0;
  iStack_28 = 0;
  uStack_40 = 0;
  iStack_38 = 0;
  uStack_50 = 0;
  iStack_48 = 0;
  uStack_54 = 0;
  if (iVar3 == 0) {
    uStack_30 = *(undefined8 *)(param_1 + 7);
    *param_1 = -1;
    iStack_28 = param_1[9];
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
LAB_017a653c:
    iVar3 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    piVar8 = (int *)uStack_30;
    if ((int *)uStack_30 != (int *)0x0) {
      iVar7 = (int)(short)iStack_28;
      iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x60) + 0x38) + 0x10);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768();
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 0x14);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      iVar1 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_017a6cd0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar8,iVar3,0);
LAB_017a6cd0:
      (*(code *)*puVar2)(piVar8,iVar7,puVar2[1]);
    }
    goto LAB_017a6ce4;
  }
  if (iVar3 == 1) {
    uStack_50 = *(undefined8 *)(param_1 + 10);
    *param_1 = -1;
    iStack_48 = param_1[0xc];
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
LAB_017a6488:
    piVar8 = (int *)uStack_50;
    if ((int *)uStack_50 == (int *)0x0) {
LAB_017a68c0:
      uVar9 = uStack_50._4_4_;
    }
    else {
      iVar7 = (int)(short)iStack_48;
      iVar3 = *(int *)(**(int **)(_UNK_017a70d0 + 0x17a64a0) + 0x10);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768();
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 0x14);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      iVar1 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_017a6ac4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar8,iVar3,0);
LAB_017a6ac4:
      uVar9 = (*(code *)*puVar2)(piVar8,iVar7,puVar2[1]);
    }
    if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_String__op_Inequality_2a09760(param_1[6],*(undefined4 *)(param_1[3] + 8),0);
    if (iVar3 != 0) {
      if (*(int *)(**(int **)(_UNK_017a70cc + 0x17a6b14) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_AddressableAssets_Addressables__RemoveResourceLocator_323f480(uVar9,0);
      goto LAB_017a6ce4;
    }
    if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar2 = (undefined4 *)(param_1[3] + 0xc);
    *puVar2 = uVar9;
    thunk_FUN_00ec5080(puVar2,uVar9);
    iVar3 = param_1[4];
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = FUN_00efd768();
    }
    Rotatelab_Networking_AdvancedAssetReference_object___LoadAssetAsync_1f1cb1c
              (&uStack_68,iVar3,*(undefined4 *)(*(int *)(iVar7 + 0x60) + 0x10));
    iStack_38 = iStack_60;
    iVar3 = *(int *)(param_2 + 0x10);
    uStack_40 = uStack_68;
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    uStack_68 = 0;
    iStack_60 = 0;
    if ((*(byte *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x60) + 0x18) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iStack_60 = iStack_38;
    uStack_68 = uStack_40;
    thunk_FUN_00ec5080(&uStack_68,0);
    iStack_28 = iStack_60;
    iVar3 = *(int *)(param_2 + 0x10);
    uStack_30 = uStack_68;
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x60) + 0x24) + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    piVar8 = (int *)uStack_30;
    if ((int *)uStack_30 != (int *)0x0) {
      iVar7 = (int)(short)iStack_28;
      iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768();
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 4);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      iVar1 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
            goto LAB_017a6d24;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar8,iVar3,1);
LAB_017a6d24:
      iVar3 = (*(code *)*puVar2)(piVar8,iVar7,puVar2[1]);
      if (iVar3 == 0) {
        *param_1 = 2;
        param_1[9] = iStack_28;
        *(undefined8 *)(param_1 + 7) = uStack_30;
        thunk_FUN_00ec5080(param_1 + 7,0);
        iVar3 = *(int *)(param_2 + 0x10);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = FUN_00efd768();
        }
        func_0x013ff3a0(param_1 + 1,&uStack_30,param_1,
                        *(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x2c));
        return;
      }
    }
  }
  else {
    if (iVar3 != 2) {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_017a70a4 + 0x17a65e8));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = Rotatelab_RemoteConfigManager__GetSatoriFlag_object__1595a34
                        (iVar3,param_1[2],0,**(undefined4 **)(_UNK_017a70a8 + 0x17a660c));
      piVar8 = param_1 + 6;
      *piVar8 = iVar3;
      thunk_FUN_00ec5080(piVar8);
      iVar3 = param_1[3];
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *piVar8;
      if (*(int *)(**(int **)(_UNK_017a70ac + 0x17a664c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = Rotatelab_Utilities__TryChangeValue_object__1663e28
                        (iVar3 + 8,iVar7,**(undefined4 **)(_UNK_017a70b0 + 0x17a666c));
      if (iVar3 == 0) {
        if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(param_1[3] + 0xc) == 0) goto LAB_017a6ce4;
        iVar3 = param_1[4];
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar7 = *(int *)(param_2 + 0x10);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = FUN_00efd768();
        }
        uVar9 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                          (iVar3,*(undefined4 *)(*(int *)(iVar7 + 0x60) + 8));
        if (*(int *)(**(int **)(_UNK_017a70b4 + 0x17a6928) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar9,0,0);
        if (iVar3 == 0) goto LAB_017a6ce4;
        if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = UnityEngine_AddressableAssets_AssetReference__get_IsDone_3249634(param_1[4],0);
        if (iVar3 == 0) goto LAB_017a6ce4;
        piVar8 = (int *)param_1[4];
        if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar8 + 0x150))(piVar8,*(undefined4 *)(*piVar8 + 0x154));
        iVar3 = param_1[4];
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar7 = *(int *)(param_2 + 0x10);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = FUN_00efd768();
        }
        Rotatelab_Networking_AdvancedAssetReference_object___LoadAssetAsync_1f1cb1c
                  (&uStack_68,iVar3,*(undefined4 *)(*(int *)(iVar7 + 0x60) + 0x10));
        iStack_38 = iStack_60;
        iVar3 = *(int *)(param_2 + 0x10);
        uStack_40 = uStack_68;
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = FUN_00efd768();
        }
        func_0x00b97f30(&uStack_68,&uStack_40,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x18));
        iStack_28 = iStack_60;
        iVar3 = *(int *)(param_2 + 0x10);
        uStack_30 = uStack_68;
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = FUN_00efd768();
        }
        iVar3 = func_0x017bb844(&uStack_30,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x24));
        if (iVar3 == 0) {
          *param_1 = 0;
          param_1[9] = iStack_28;
          *(undefined8 *)(param_1 + 7) = uStack_30;
          thunk_FUN_00ec5080(param_1 + 7);
          iVar3 = *(int *)(param_2 + 0x10);
          if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = FUN_00efd768();
          }
          func_0x013ff3a0(param_1 + 1,&uStack_30,param_1,
                          *(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x2c));
          return;
        }
        goto LAB_017a653c;
      }
      piVar5 = (int *)param_1[4];
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar5 + 0x150))(piVar5,*(undefined4 *)(*piVar5 + 0x154));
      if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1[3] + 0xc) != 0) {
        if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar9 = *(undefined4 *)(param_1[3] + 0xc);
        if (*(int *)(**(int **)(_UNK_017a70b8 + 0x17a66dc) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_AddressableAssets_Addressables__RemoveResourceLocator_323f480(uVar9,0);
        if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar2 = (undefined4 *)(param_1[3] + 0xc);
        *puVar2 = 0;
        thunk_FUN_00ec5080(puVar2,0);
      }
      iVar3 = System_String__IsNullOrWhiteSpace_2a0a85c(*piVar8,0);
      if (iVar3 != 0) goto LAB_017a6ce4;
      iVar3 = param_1[5];
      iVar7 = param_1[6];
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = System_String__LastIndexOf_2a112ac(iVar7,0x2f,0);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = System_String__Substring_2a0d5ac(iVar7,0,uVar9,0);
      if (*(int *)(**(int **)(_UNK_017a70bc + 0x17a6788) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_AddressableAssets_Initialization_AddressablesRuntimeProperties__SetPropertyValue_3259370
                (iVar3,uVar9,0);
      iVar3 = *piVar8;
      if (*(int *)(**(int **)(_UNK_017a70c0 + 0x17a67b4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_AddressableAssets_Addressables__LoadContentCatalogAsync_3238ab8
                (&uStack_68,iVar3,1,0,0);
      Cysharp_Threading_Tasks_AddressablesAsyncExtensions__GetAwaiter_object__13a1030
                (&uStack_68,(undefined4)uStack_68,uStack_68._4_4_,iStack_60,
                 **(undefined4 **)(_UNK_017a70c4 + 0x17a67f8));
      iStack_48 = iStack_60;
      uStack_50 = uStack_68;
      iVar3 = *(int *)(**(int **)(_UNK_017a70c8 + 0x17a6818) + 0x10);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768();
      }
      piVar8 = (int *)uStack_50;
      if ((int *)uStack_50 != (int *)0x0) {
        iVar7 = (int)(short)iStack_48;
        iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x60) + 0xc) + 0x10);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = FUN_00efd768();
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 4);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = FUN_00efd768(iVar3);
        }
        iVar1 = *piVar8;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == iVar3) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
              goto LAB_017a6da0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piVar8,iVar3,1);
LAB_017a6da0:
        iVar3 = (*(code *)*puVar2)(piVar8,iVar7,puVar2[1]);
        if (iVar3 == 0) {
          *param_1 = 1;
          param_1[0xc] = iStack_48;
          *(undefined8 *)(param_1 + 10) = uStack_50;
          thunk_FUN_00ec5080(param_1 + 10,0);
          iVar3 = *(int *)(param_2 + 0x10);
          if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = FUN_00efd768();
          }
          func_0x013ff3a0(param_1 + 1,&uStack_50,param_1,
                          *(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x3c));
          return;
        }
        goto LAB_017a6488;
      }
      goto LAB_017a68c0;
    }
    uStack_30 = *(undefined8 *)(param_1 + 7);
    *param_1 = -1;
    iStack_28 = param_1[9];
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  piVar8 = (int *)uStack_30;
  if ((int *)uStack_30 != (int *)0x0) {
    iVar7 = (int)(short)iStack_28;
    iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x60) + 0x38) + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 0x14);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768(iVar3);
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar3) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_017a6aa0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,iVar3,0);
LAB_017a6aa0:
    (*(code *)*puVar2)(piVar8,iVar7,puVar2[1]);
  }
LAB_017a6ce4:
  *param_1 = -2;
  param_1[6] = 0;
  thunk_FUN_00ec5080(param_1 + 6,0);
  func_0x00fcef34(param_1 + 1,0);
  return;
}

