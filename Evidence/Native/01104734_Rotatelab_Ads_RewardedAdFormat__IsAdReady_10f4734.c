/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$IsAdReady
bool Rotatelab_Ads_RewardedAdFormat__IsAdReady (Rotatelab_Ads_RewardedAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$IsAdReady
   bool Rotatelab_Ads_RewardedAdFormat__IsAdReady (Rotatelab_Ads_RewardedAdFormat_o* __this, const
   MethodInfo* method); */

uint Rotatelab_Ads_RewardedAdFormat__IsAdReady_10f4734(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 unaff_r4;
  uint uVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  uint unaff_r7;
  uint uVar16;
  int *piVar17;
  int aiStack_48 [2];
  undefined8 uStack_40;
  int iStack_38;
  char cStack_2d;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  pcVar13 = (char *)(_UNK_011047a8 + 0x1104748);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011047ac + 0x110475c));
    *pcVar13 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 != 0) {
    iVar4 = Rotatelab_Ads_NeftaDualTrackLoader__get_IsShowing_10efee0();
    if (iVar4 == 0) {
      iVar5 = Rotatelab_Ads_NeftaDualTrackLoader__GetBestReadyTrack_10f29e4(iVar5);
      return (uint)(iVar5 != 0);
    }
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_011047b0 + 0x1104784) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar13 = (char *)(_UNK_029c1240 + 0x29c1114);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c1244 + 0x29c1128),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c1248 + 0x29c1134));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c124c + 0x29c1140));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c1250 + 0x29c114c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c1254 + 0x29c1158));
    *pcVar13 = '\x01';
  }
  MaxSdkBase__ValidateAdUnitIdentifier_29afff4(iVar5,**(undefined4 **)(_UNK_029c1258 + 0x29c116c));
  piVar14 = *(int **)(_UNK_029c125c + 0x29c1180);
  iVar4 = *piVar14;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar14;
  }
  iVar4 = **(int **)(iVar4 + 0x5c);
  piVar14 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_029c1260 + 0x29c11a4),1);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar5 != 0) &&
     (iVar9 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar14 + 0x20)), iVar9 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if (piVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar14[4] = iVar5;
  thunk_FUN_00ec5080(piVar14 + 4,iVar5);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = **(int **)(_UNK_029c1264 + 0x29c1228);
  uVar10 = **(undefined4 **)(_UNK_029c1268 + 0x29c1234);
  piVar6 = *(int **)(iVar5 + 0x1c);
  uStack_18 = unaff_r4;
  if (piVar6 == (int *)0x0) {
    FUN_00efd7c4(iVar5);
    piVar6 = *(int **)(iVar5 + 0x1c);
  }
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x1c) == 0) {
    FUN_00efd7c4(iVar5);
  }
  uVar8 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc(*(undefined4 *)(iVar4 + 0xc),0);
  uStack_20 = **(undefined4 **)(iVar5 + 0x1c);
  aiStack_48[0] = UnityEngine_AndroidJNIHelper__GetMethodID_bool__13af154(uVar8,uVar10,piVar14,1);
  iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
  uStack_24 = uStack_18;
  piVar6 = aiStack_48;
  iStack_2c = **(int **)(_UNK_013cee3c + 0x13cde54);
  aiStack_48[1] = iVar4;
  if (*(int *)(iVar5 + 0x1c) == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_013cee40 + 0x13cde74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_013cee44 + 0x13cde80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_013cee48 + 0x13cde8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_013cee4c + 0x13cde98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_013cee50 + 0x13cdea4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_013cee54 + 0x13cdeb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_013cee58 + 0x13cdebc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_013cee5c + 0x13cdec8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_013cee60 + 0x13cded4));
    if (*(int *)(iVar5 + 0x1c) == 0) {
      FUN_00efd7c4(iVar5);
    }
  }
  uVar12 = 0;
  if (piVar14 != (int *)0x0) {
    unaff_r7 = piVar14[3];
  }
  piVar15 = (int *)0x0;
  cStack_2d = '\0';
  uVar16 = 0;
  piVar17 = aiStack_48;
  if (piVar14 != (int *)0x0 && unaff_r7 != 0) {
    if ((unaff_r7 & 0x1fffffff) != 0) {
      piVar6 = aiStack_48 + unaff_r7 * -2;
      piVar15 = piVar6;
    }
    FUN_00f88e5c(piVar15);
    uVar16 = unaff_r7;
    piVar17 = piVar6;
    if (0x7fffffff < unaff_r7) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException_2b94878(0);
    }
  }
  UnityEngine_AndroidJNI__PushLocalFrame_357ada8(uVar16 + 1,0);
  UnityEngine_AndroidJNIHelper__CreateJNIArgArray_35778f0(piVar14,piVar15,uVar16,0);
  iVar4 = *(int *)(_UNK_013cee64 + 0x13cdf64);
  iStack_38 = 0;
  uVar10 = **(undefined4 **)(iVar5 + 0x1c);
  if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
  piVar14 = *(int **)(_UNK_013cee68 + 0x13cdf9c);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar9 = UnityEngine_AndroidReflection__IsPrimitive_358ab58(uVar10,0);
  iVar11 = *(int *)(*(int *)(iVar4 + 0x70) + 0x74);
  uVar10 = **(undefined4 **)(iVar5 + 0x1c);
  if (iVar9 == 0) {
    if (iVar11 == 0) {
      FUN_00ec3934();
    }
    uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
    uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0x48) + 0x10,0);
    iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
    if (iVar9 == 0) {
      uVar10 = **(undefined4 **)(iVar5 + 0x1c);
      if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
      uVar8 = System_Type__GetTypeFromHandle_2b80928(**(undefined4 **)(_UNK_013cee74 + 0x13ce29c),0)
      ;
      iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
      if (iVar9 == 0) {
        uVar10 = **(undefined4 **)(iVar5 + 0x1c);
        if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
        uVar8 = System_Type__GetTypeFromHandle_2b80928
                          (**(undefined4 **)(_UNK_013cee7c + 0x13ce4bc),0);
        iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
        if (iVar9 == 0) {
          iVar9 = *(int *)(iVar4 + 0x50);
          if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar10 = System_Type__GetTypeFromHandle_2b80928(iVar9 + 0x10,0);
          uVar8 = System_Type__GetTypeFromHandle_2b80928(**(undefined4 **)(iVar5 + 0x1c),0);
          if (*(int *)(*piVar14 + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar9 = UnityEngine_AndroidReflection__IsAssignableFrom_358ab7c(uVar10,uVar8,0);
          if (iVar9 == 0) {
            uVar10 = **(undefined4 **)(iVar5 + 0x1c);
            if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
              FUN_00ec3934();
            }
            piVar14 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar10,0);
            if (piVar14 == (int *)0x0) {
              uVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013cee88 + 0x13cebf8));
              uVar8 = 0;
            }
            else {
              uVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013cee84 + 0x13cec10));
              uVar8 = (**(code **)(*piVar14 + 0xd8))(piVar14,*(undefined4 *)(*piVar14 + 0xdc));
            }
            uVar7 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013cee8c + 0x13cec38));
            uVar10 = System_String__Concat_2a0b574(uVar10,uVar8,uVar7,0);
            thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013cee90 + 0x13cec5c));
            uVar8 = thunk_FUN_00f00cdc();
            System_Exception___ctor_2bad064(uVar8,uVar10,0);
            func_0x00ec3920(uVar8,iVar5);
                    /* WARNING: Subroutine does not return */
            FUN_00ec3760();
          }
          uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                             (*(undefined4 *)(aiStack_48[1] + 0xc),0);
          iVar4 = aiStack_48[0];
          *(undefined4 *)((int)piVar17 + -8) = 0;
          uVar10 = UnityEngine_AndroidJNISafe__CallStaticObjectMethod_3579354
                             (uVar10,iVar4,piVar15,uVar16);
          uVar12 = UnityEngine_AndroidJavaObject__FromJavaArray_bool__13b0998
                             (uVar10,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 8));
          goto LAB_013ce91c;
        }
        uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                           (*(undefined4 *)(aiStack_48[1] + 0xc),0);
        iVar4 = aiStack_48[0];
        *(undefined4 *)((int)piVar17 + -8) = 0;
        iVar4 = UnityEngine_AndroidJNISafe__CallStaticObjectMethod_3579354
                          (uVar10,iVar4,piVar15,uVar16);
        if (iVar4 == 0) goto LAB_013ce5a0;
        piVar14 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_013cee80 + 0x13ce520));
        UnityEngine_AndroidJavaObject___ctor_3587e4c(piVar14,iVar4,0);
        iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = FUN_00efd768(iVar5);
        }
        if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*piVar14 + 0x20) != *(int *)(iVar5 + 0x20)) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28(piVar14,iVar5);
        }
        pcVar13 = (char *)FUN_00ec3940(piVar14);
      }
      else {
        uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                           (*(undefined4 *)(aiStack_48[1] + 0xc),0);
        iVar4 = aiStack_48[0];
        *(undefined4 *)((int)piVar17 + -8) = 0;
        iVar4 = UnityEngine_AndroidJNISafe__CallStaticObjectMethod_3579354
                          (uVar10,iVar4,piVar15,uVar16);
        if (iVar4 == 0) {
LAB_013ce5a0:
          pcVar13 = &cStack_2d;
          cStack_2d = '\0';
        }
        else {
          piVar14 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_013cee78 + 0x13ce300));
          UnityEngine_AndroidJavaClass___ctor_358a29c(piVar14,iVar4,0);
          iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
          if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = FUN_00efd768(iVar5);
          }
          if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(*piVar14 + 0x20) != *(int *)(iVar5 + 0x20)) {
                    /* WARNING: Subroutine does not return */
            FUN_00ec3e28(piVar14,iVar5);
          }
          pcVar13 = (char *)FUN_00ec3940(piVar14);
        }
      }
    }
    else {
      uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                         (*(undefined4 *)(aiStack_48[1] + 0xc),0);
      iVar4 = aiStack_48[0];
      *(undefined4 *)((int)piVar17 + -8) = 0;
      piVar14 = (int *)UnityEngine_AndroidJNISafe__CallStaticStringMethod_3583d68
                                 (uVar10,iVar4,piVar15,uVar16);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768(iVar5);
      }
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*piVar14 + 0x20) != *(int *)(iVar5 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar14,iVar5);
      }
      pcVar13 = (char *)FUN_00ec3940(piVar14);
    }
LAB_013ce910:
    cVar1 = *pcVar13;
  }
  else {
    if (iVar11 == 0) {
      FUN_00ec3934();
    }
    uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
    uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0x24) + 0x10,0);
    iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
    if (iVar9 != 0) {
      uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                         (*(undefined4 *)(aiStack_48[1] + 0xc),0);
      iVar9 = aiStack_48[0];
      *(undefined4 *)((int)piVar17 + -8) = 0;
      uVar10 = UnityEngine_AndroidJNISafe__CallStaticIntMethod_3584118(uVar10,iVar9,piVar15,uVar16);
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
      piVar14 = (int *)FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_40);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768(iVar5);
      }
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*piVar14 + 0x20) != *(int *)(iVar5 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar14,iVar5);
      }
      pcVar13 = (char *)FUN_00ec3940(piVar14);
      goto LAB_013ce910;
    }
    uVar10 = **(undefined4 **)(iVar5 + 0x1c);
    if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
    uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0x14) + 0x10,0);
    iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
    if (iVar9 != 0) {
      uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                         (*(undefined4 *)(aiStack_48[1] + 0xc),0);
      iVar9 = aiStack_48[0];
      *(undefined4 *)((int)piVar17 + -8) = 0;
      uVar2 = UnityEngine_AndroidJNISafe__CallStaticBooleanMethod_35840ac
                        (uVar10,iVar9,piVar15,uVar16);
      uStack_40 = CONCAT71(uStack_40._1_7_,uVar2);
      piVar14 = (int *)FUN_00ec393c(*(undefined4 *)(iVar4 + 0x14),&uStack_40);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768(iVar5);
      }
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*piVar14 + 0x20) != *(int *)(iVar5 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar14,iVar5);
      }
      pcVar13 = (char *)FUN_00ec3940(piVar14);
      goto LAB_013ce910;
    }
    uVar10 = **(undefined4 **)(iVar5 + 0x1c);
    if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
    uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0xc) + 0x10,0);
    iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
    if (iVar9 != 0) {
      if (*(int *)(**(int **)(_UNK_013cee6c + 0x13ce3c8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__LogWarning_35b0090(**(undefined4 **)(_UNK_013cee70 + 0x13ce3e4),0);
      uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                         (*(undefined4 *)(aiStack_48[1] + 0xc),0);
      iVar9 = aiStack_48[0];
      *(undefined4 *)((int)piVar17 + -8) = 0;
      uVar2 = UnityEngine_AndroidJNISafe__CallStaticSByteMethod_3584040(uVar10,iVar9,piVar15,uVar16)
      ;
      uStack_40 = CONCAT71(uStack_40._1_7_,uVar2);
      piVar14 = (int *)FUN_00ec393c(*(undefined4 *)(iVar4 + 0xc),&uStack_40);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768(iVar5);
      }
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*piVar14 + 0x20) != *(int *)(iVar5 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar14,iVar5);
      }
      pcVar13 = (char *)FUN_00ec3940(piVar14);
      goto LAB_013ce910;
    }
    uVar10 = **(undefined4 **)(iVar5 + 0x1c);
    if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
    uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0x18) + 0x10,0);
    iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
    if (iVar9 != 0) {
      uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                         (*(undefined4 *)(aiStack_48[1] + 0xc),0);
      iVar9 = aiStack_48[0];
      *(undefined4 *)((int)piVar17 + -8) = 0;
      uVar2 = UnityEngine_AndroidJNISafe__CallStaticSByteMethod_3584040(uVar10,iVar9,piVar15,uVar16)
      ;
      uStack_40 = CONCAT71(uStack_40._1_7_,uVar2);
      piVar14 = (int *)FUN_00ec393c(*(undefined4 *)(iVar4 + 0x18),&uStack_40);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768(iVar5);
      }
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*piVar14 + 0x20) != *(int *)(iVar5 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar14,iVar5);
      }
      pcVar13 = (char *)FUN_00ec3940(piVar14);
      goto LAB_013ce910;
    }
    uVar10 = **(undefined4 **)(iVar5 + 0x1c);
    if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
    uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0x1c) + 0x10,0);
    iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
    if (iVar9 == 0) {
      uVar10 = **(undefined4 **)(iVar5 + 0x1c);
      if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
      uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0x34) + 0x10,0);
      iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
      if (iVar9 == 0) {
        uVar10 = **(undefined4 **)(iVar5 + 0x1c);
        if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
        uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0x3c) + 0x10,0);
        iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
        if (iVar9 == 0) {
          uVar10 = **(undefined4 **)(iVar5 + 0x1c);
          if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
          uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0x40) + 0x10,0);
          iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
          if (iVar9 == 0) {
            uVar10 = **(undefined4 **)(iVar5 + 0x1c);
            if (*(int *)(*(int *)(iVar4 + 0x70) + 0x74) == 0) {
              FUN_00ec3934();
            }
            uVar10 = System_Type__GetTypeFromHandle_2b80928(uVar10,0);
            uVar8 = System_Type__GetTypeFromHandle_2b80928(*(int *)(iVar4 + 0x44) + 0x10,0);
            iVar9 = System_Type__op_Equality_2b8b164(uVar10,uVar8,0);
            if (iVar9 == 0) {
              cStack_2d = '\0';
              goto LAB_013ce91c;
            }
            uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                               (*(undefined4 *)(aiStack_48[1] + 0xc),0);
            iVar9 = aiStack_48[0];
            *(undefined4 *)((int)piVar17 + -8) = 0;
            uVar3 = UnityEngine_AndroidJNISafe__CallStaticCharMethod_3583e04
                              (uVar10,iVar9,piVar15,uVar16);
            uStack_40 = CONCAT62(uStack_40._2_6_,uVar3);
            uVar10 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x44),&uStack_40);
            iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
            if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
              iVar5 = FUN_00efd768(iVar5);
            }
            pcVar13 = (char *)FUN_00b908d4(uVar10,iVar5);
          }
          else {
            uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                               (*(undefined4 *)(aiStack_48[1] + 0xc),0);
            iVar9 = aiStack_48[0];
            *(undefined4 *)((int)piVar17 + -8) = 0;
            uStack_40 = UnityEngine_AndroidJNISafe__CallStaticDoubleMethod_3583e70
                                  (uVar10,iVar9,piVar15,uVar16);
            uVar10 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x40),&uStack_40);
            iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
            if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
              iVar5 = FUN_00efd768(iVar5);
            }
            pcVar13 = (char *)FUN_00b908d4(uVar10,iVar5);
          }
        }
        else {
          uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                             (*(undefined4 *)(aiStack_48[1] + 0xc),0);
          iVar9 = aiStack_48[0];
          *(undefined4 *)((int)piVar17 + -8) = 0;
          uVar10 = UnityEngine_AndroidJNISafe__CallStaticFloatMethod_3583ee4
                             (uVar10,iVar9,piVar15,uVar16);
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
          uVar10 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x3c),&uStack_40);
          iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
          if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = FUN_00efd768(iVar5);
          }
          pcVar13 = (char *)FUN_00b908d4(uVar10,iVar5);
        }
      }
      else {
        uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                           (*(undefined4 *)(aiStack_48[1] + 0xc),0);
        iVar9 = aiStack_48[0];
        *(undefined4 *)((int)piVar17 + -8) = 0;
        uStack_40 = UnityEngine_AndroidJNISafe__CallStaticLongMethod_3583f5c
                              (uVar10,iVar9,piVar15,uVar16);
        uVar10 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x34),&uStack_40);
        iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = FUN_00efd768(iVar5);
        }
        pcVar13 = (char *)FUN_00b908d4(uVar10,iVar5);
      }
    }
    else {
      uVar10 = UnityEngine_GlobalJavaObjectRef__op_Implicit_3585ebc
                         (*(undefined4 *)(aiStack_48[1] + 0xc),0);
      iVar9 = aiStack_48[0];
      *(undefined4 *)((int)piVar17 + -8) = 0;
      uVar3 = UnityEngine_AndroidJNISafe__CallStaticShortMethod_3583fd4(uVar10,iVar9,piVar15,uVar16)
      ;
      uStack_40 = CONCAT62(uStack_40._2_6_,uVar3);
      uVar10 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x1c),&uStack_40);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768(iVar5);
      }
      pcVar13 = (char *)FUN_00b908d4(uVar10,iVar5);
    }
    cVar1 = *pcVar13;
  }
  uVar12 = 0;
  if (cVar1 != '\0') {
    uVar12 = 1;
  }
LAB_013ce91c:
  UnityEngine_AndroidJNI__PopLocalFrame_357adf4(0,0);
  if (iStack_38 != 0) {
    FUN_00ec3a6c();
  }
  if (**(int **)(_UNK_013cee94 + 0x13ce948) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iStack_2c);
  }
  return uVar12;
}

