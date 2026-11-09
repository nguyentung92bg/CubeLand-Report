/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$System.IDisposable.Dispose
void Rotatelab_Networking_StopwatchEvent__System_IDisposable_Dispose (Rotatelab_Networking_StopwatchEvent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$System.IDisposable.Dispose
   void Rotatelab_Networking_StopwatchEvent__System_IDisposable_Dispose
   (Rotatelab_Networking_StopwatchEvent_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_StopwatchEvent__System_IDisposable_Dispose_fe9010(int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  double dVar11;
  undefined8 uVar12;
  undefined4 uStack_60;
  longlong *plStack_5c;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  double dStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  
  pcVar6 = (char *)(_UNK_00ff9870 + 0xff902c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9874 + 0xff9040));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9878 + 0xff904c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff987c + 0xff9058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9880 + 0xff9064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9884 + 0xff9070));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9888 + 0xff907c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff988c + 0xff9088));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9890 + 0xff9094));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9894 + 0xff90a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9898 + 0xff90ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff989c + 0xff90b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98a0 + 0xff90c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98a4 + 0xff90d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98a8 + 0xff90dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98ac + 0xff90e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98b0 + 0xff90f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98b4 + 0xff9100));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98b8 + 0xff910c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98bc + 0xff9118));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98c0 + 0xff9124));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98c4 + 0xff9130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98c8 + 0xff913c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98cc + 0xff9148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98d0 + 0xff9154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98d4 + 0xff9160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98d8 + 0xff916c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff98dc + 0xff9178));
    *pcVar6 = '\x01';
  }
  dStack_40 = 0.0;
  lStack_38 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
  uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
  lStack_50 = (ulonglong)*(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4) << 0x20;
  uStack_48 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
  if ((0.0 <= *(double *)(param_1 + 0x10)) && (*(double *)(param_1 + 0x18) < 0.0)) {
    uVar12 = UnityEngine_Time__get_realtimeSinceStartupAsDouble_360ca34(0);
    *(undefined8 *)(param_1 + 0x18) = uVar12;
    if (*(int *)(param_1 + 0x24) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                (&uStack_60,*(int *)(param_1 + 0x24),**(undefined4 **)(_UNK_00ff98e0 + 0xff91f4));
      lStack_38 = CONCAT44(plStack_5c,uStack_60);
      uStack_30 = uStack_58;
      uStack_60 = 0;
      puVar8 = *(undefined4 **)(_UNK_00ff98e4 + 0xff9218);
      plStack_5c = &lStack_38;
      while (iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                               (&lStack_38,*puVar8), iVar2 != 0) {
        if (uStack_30._4_4_ == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Networking_StopwatchEvent__Complete_fe9014(uStack_30._4_4_);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&lStack_38,**(undefined4 **)(_UNK_00ff98e8 + 0xff9250));
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar7 = *(int **)(_UNK_00ff98f0 + 0xff9270);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar7;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x78) != '\0') {
        piVar7 = *(int **)(_UNK_00ff98f4 + 0xff92a0);
        iVar2 = *piVar7;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar7;
        }
        if (**(int **)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Text_StringBuilder__Clear_2a15afc(**(int **)(iVar2 + 0x5c),0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Text_StringBuilder__Append_2a16604
                          (iVar2,**(undefined4 **)(_UNK_00ff98f8 + 0xff92f4),0);
        uVar3 = Rotatelab_Networking_StopwatchEvent__GetFullName_fe9950(param_1);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Text_StringBuilder__Append_2a16604(iVar2,uVar3,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Text_StringBuilder__Append_2a16604
                          (iVar2,**(undefined4 **)(_UNK_00ff98fc + 0xff934c),0);
        puVar8 = *(undefined4 **)(_UNK_00ff9900 + 0xff936c);
        uVar3 = System_Double__ToString_2b51c80((undefined1 (*) [16])(param_1 + 0x10),*puVar8,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Text_StringBuilder__Append_2a16604(iVar2,uVar3,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Text_StringBuilder__Append_2a16604
                          (iVar2,**(undefined4 **)(_UNK_00ff9904 + 0xff93b4),0);
        uVar3 = System_Double__ToString_2b51c80(param_1 + 0x18,*puVar8,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Text_StringBuilder__Append_2a16604(iVar2,uVar3,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Text_StringBuilder__Append_2a16604
                          (iVar2,**(undefined4 **)(_UNK_00ff9908 + 0xff9410),0);
        auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
        dStack_40 = auVar1._8_8_ - auVar1._0_8_;
        uVar3 = System_Double__ToString_2b51c80(&dStack_40,*puVar8,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Text_StringBuilder__Append_2a16604(iVar2,uVar3,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar7 = (int *)System_Text_StringBuilder__Append_2a16604
                                  (iVar2,**(undefined4 **)(_UNK_00ff990c + 0xff947c),0);
        piVar9 = *(int **)(_UNK_00ff9910 + 0xff9494);
        iVar2 = *piVar9;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar9;
        }
        if (*(int *)(*(int *)(iVar2 + 0x5c) + 0xc) != 0) {
          if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_object___GetEnumerator_267e7a4
                    (&uStack_60,*(int *)(param_1 + 0x20),**(undefined4 **)(_UNK_00ff9914 + 0xff94dc)
                    );
          lStack_50 = CONCAT44(plStack_5c,uStack_60);
          plStack_5c = &lStack_50;
          uStack_48 = uStack_58;
          uStack_60 = 0;
          puVar10 = *(undefined4 **)(_UNK_00ff9918 + 0xff9508);
          puVar8 = *(undefined4 **)(_UNK_00ff991c + 0xff9510);
          while (iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                   (&lStack_50,*puVar10), iVar2 != 0) {
            uVar3 = uStack_48._4_4_;
            if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar2 = System_Text_StringBuilder__Append_2a16604
                              (piVar7,**(undefined4 **)(_UNK_00ff9920 + 0xff953c),0);
            iVar4 = *piVar9;
            if (*(int *)(iVar4 + 0x74) == 0) {
              FUN_00ec3934();
              iVar4 = *piVar9;
            }
            iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0xc);
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar5 = (**(code **)(iVar4 + 0xc))
                              (*(undefined4 *)(iVar4 + 0x20),uVar3,*(undefined4 *)(iVar4 + 0x14));
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar2 = System_Text_StringBuilder__Append_2a16604(iVar2,uVar5,0);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar2 = System_Text_StringBuilder__Append_2a16604(iVar2,*puVar8,0);
            iVar4 = *(int *)(*(int *)(*piVar9 + 0x5c) + 0x10);
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar3 = (**(code **)(iVar4 + 0xc))
                              (*(undefined4 *)(iVar4 + 0x20),uVar3,*(undefined4 *)(iVar4 + 0x14));
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Text_StringBuilder__Append_2a1746c(iVar2,uVar3,0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                    (&lStack_50,**(undefined4 **)(_UNK_00ff9924 + 0xff962c));
        }
        if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar3 = (**(code **)(*piVar7 + 0xd8))(piVar7,*(undefined4 *)(*piVar7 + 0xdc));
        if (*(int *)(**(int **)(_UNK_00ff992c + 0xff9664) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__Log_35b1c44(uVar3,0);
      }
    }
    Rotatelab_Networking_StopwatchEvent__AddParameter_fe99c0
              (param_1,**(undefined4 **)(_UNK_00ff9930 + 0xff9694),
               (int)*(undefined8 *)(param_1 + 0x10),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20));
    Rotatelab_Networking_StopwatchEvent__AddParameter_fe99c0
              (param_1,**(undefined4 **)(_UNK_00ff9934 + 0xff96b0),
               (int)*(undefined8 *)(param_1 + 0x18),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20));
    dVar11 = SUB168(*(undefined1 (*) [16])(param_1 + 0x10),8) -
             SUB168(*(undefined1 (*) [16])(param_1 + 0x10),0);
    Rotatelab_Networking_StopwatchEvent__AddParameter_fe99c0
              (param_1,**(undefined4 **)(_UNK_00ff9938 + 0xff96d0),SUB84(dVar11,0),
               (int)((ulonglong)dVar11 >> 0x20));
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_String__Replace_2a0d800
                        (*(int *)(param_1 + 8),**(undefined4 **)(_UNK_00ff9940 + 0xff9714),
                         **(undefined4 **)(_UNK_00ff993c + 0xff9708),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = System_String__ToLowerInvariant_2a0fe38(iVar2,0);
      uVar3 = System_String__Concat_29fee38(uVar3,**(undefined4 **)(_UNK_00ff9944 + 0xff9748),0);
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = System_Collections_Generic_List_object___ToArray_267f7a0
                        (*(int *)(param_1 + 0x20),**(undefined4 **)(_UNK_00ff9948 + 0xff976c));
      if (*(int *)(**(int **)(_UNK_00ff994c + 0xff9784) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar3,uVar5,0);
    }
  }
  return;
}

