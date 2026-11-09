/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$MigrateHiroLongValue
void Rotatelab_Networking_CloudSaveManager__MigrateHiroLongValue (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data, System_String_o* id, int64_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$MigrateHiroLongValue
   void Rotatelab_Networking_CloudSaveManager__MigrateHiroLongValue
   (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data,
   System_String_o* id, int64_t value, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__MigrateHiroLongValue_11461d4
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  pcVar7 = (char *)(_UNK_01156b08 + 0x11561f4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b0c + 0x115620c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b10 + 0x1156218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b14 + 0x1156224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b18 + 0x1156230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b1c + 0x115623c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b20 + 0x1156248));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b24 + 0x1156254));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b28 + 0x1156260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b2c + 0x115626c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b30 + 0x1156278));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b34 + 0x1156284));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b38 + 0x1156290));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b3c + 0x115629c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b40 + 0x11562a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b44 + 0x11562b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b48 + 0x11562c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b4c + 0x11562cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b50 + 0x11562d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b54 + 0x11562e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b58 + 0x11562f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b5c + 0x11562fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b60 + 0x1156308));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b64 + 0x1156314));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b68 + 0x1156320));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b6c + 0x115632c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b70 + 0x1156338));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156b74 + 0x1156344));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01156b78 + 0x1156358) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar10 = System_Math__Max_2b6fe2c(param_5,param_6,0,0,0);
  iVar5 = (int)((ulonglong)uVar10 >> 0x20);
  iVar4 = (int)uVar10;
  puVar2 = (undefined *)_PrivateImplementationDetails___ComputeStringHash_106f534(param_3,0);
  if (puVar2 < (undefined *)0x52a1ec0e) {
    if (puVar2 < (undefined *)0x207b79a5) {
      if (puVar2 < (undefined *)0xe01ad3b) {
        if (puVar2 != &UNK_0330bd5b) {
          if (puVar2 == (undefined *)0x67c2098) {
            uVar10 = System_String__op_Equality_2a0975c
                               (param_3,**(undefined4 **)(_UNK_01156bb4 + 0x115678c),0);
            uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if ((int)uVar10 == 0) {
              return;
            }
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            piVar8 = *(int **)(param_2 + 0x18);
          }
          else {
            if (puVar2 != (undefined *)0xe01ad3a) {
              return;
            }
            uVar10 = System_String__op_Equality_2a0975c
                               (param_3,**(undefined4 **)(_UNK_01156b7c + 0x1156400),0);
            uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if ((int)uVar10 == 0) {
              return;
            }
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            piVar8 = *(int **)(param_2 + 0x24);
          }
          goto LAB_01156978;
        }
        iVar4 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156bdc + 0x11568d4),0);
        if (iVar4 == 0) {
          return;
        }
        puVar9 = (undefined8 *)(param_2 + 0xd8);
      }
      else {
        if (puVar2 != (undefined *)0x1334d918) {
          if (puVar2 == (undefined *)0x19511c00) {
            iVar3 = System_String__op_Equality_2a0975c
                              (param_3,**(undefined4 **)(_UNK_01156be0 + 0x115685c),0);
            if (iVar3 == 0) {
              return;
            }
            if (param_2 != 0) {
              *(bool *)(param_2 + 0xb8) =
                   (int)-(iVar5 + (uint)(iVar4 != 0)) < 0 !=
                   (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(iVar4 != 0)));
              return;
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (puVar2 != (undefined *)0x207b79a4) {
            return;
          }
          iVar3 = System_String__op_Equality_2a0975c
                            (param_3,**(undefined4 **)(_UNK_01156b80 + 0x11565b0),0);
          if (iVar3 == 0) {
            return;
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = *(int *)(param_2 + 0x34);
          goto LAB_01156ad8;
        }
        iVar4 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156bd4 + 0x11569b4),0);
        if (iVar4 == 0) {
          return;
        }
        puVar9 = (undefined8 *)(param_2 + 0x78);
      }
    }
    else {
      if (puVar2 < (undefined *)0x33fcab8e) {
        if (puVar2 == (undefined *)0x225e327d) {
          iVar4 = System_String__op_Equality_2a0975c
                            (param_3,**(undefined4 **)(_UNK_01156bc8 + 0x1156924),0);
          if (iVar4 == 0) {
            return;
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar4 = *(int *)(param_2 + 0x40);
LAB_01156a24:
          if (iVar4 != 0) {
            *(undefined8 *)(iVar4 + 0x28) = uVar10;
            return;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (puVar2 == (undefined *)0x23390c5d) {
          uVar10 = System_String__op_Equality_2a0975c
                             (param_3,**(undefined4 **)(_UNK_01156bac + 0x11567f4),0);
          uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((int)uVar10 == 0) {
            return;
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar8 = *(int **)(param_2 + 0x48);
        }
        else {
          if (puVar2 != (undefined *)0x33fcab8d) {
            return;
          }
          uVar10 = System_String__op_Equality_2a0975c
                             (param_3,**(undefined4 **)(_UNK_01156b84 + 0x11564e8),0);
          uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((int)uVar10 == 0) {
            return;
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar8 = *(int **)(param_2 + 0x28);
        }
        goto LAB_01156978;
      }
      if (puVar2 < (undefined *)0x393bd24d) {
        if (puVar2 == (undefined *)0x375adb7c) {
          iVar4 = System_String__op_Equality_2a0975c
                            (param_3,**(undefined4 **)(_UNK_01156bcc + 0x1156a04),0);
          if (iVar4 == 0) {
            return;
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar4 = *(int *)(param_2 + 0x4c);
          goto LAB_01156a24;
        }
        if (puVar2 != (undefined *)0x393bd24c) {
          return;
        }
        iVar4 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156b88 + 0x1156668),0);
        if (iVar4 == 0) {
          return;
        }
        puVar9 = (undefined8 *)(param_2 + 0x68);
      }
      else {
        if (puVar2 != (undefined *)0x4991260b) {
          if (puVar2 != (undefined *)0x52a1ec0d) {
            return;
          }
          uVar10 = System_String__op_Equality_2a0975c
                             (param_3,**(undefined4 **)(_UNK_01156b8c + 0x1156704),0);
          uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((int)uVar10 == 0) {
            return;
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar8 = *(int **)(param_2 + 0x50);
          goto LAB_01156978;
        }
        iVar4 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156bc4 + 0x1156a7c),0);
        if (iVar4 == 0) {
          return;
        }
        puVar9 = (undefined8 *)(param_2 + 0x70);
      }
    }
    goto LAB_01156a90;
  }
  if (puVar2 < (undefined *)0xbc184033) {
    if (puVar2 < (undefined *)0x837c9bf3) {
      if (puVar2 == (undefined *)0x80ffd595) {
        iVar4 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156bc0 + 0x11568fc),0);
        if (iVar4 == 0) {
          return;
        }
        puVar9 = (undefined8 *)(param_2 + 0x60);
LAB_01156a90:
        if (param_2 != 0) {
          *puVar9 = uVar10;
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (puVar2 != (undefined *)0x837c9bf2) {
        if (puVar2 != (undefined *)0x6f54a384) {
          return;
        }
        iVar4 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156b90 + 0x115647c),0);
        if (iVar4 == 0) {
          return;
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = *(int *)(param_2 + 0x44);
        goto LAB_01156a24;
      }
      uVar10 = System_String__op_Equality_2a0975c
                         (param_3,**(undefined4 **)(_UNK_01156bb0 + 0x11567c0),0);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 == 0) {
        return;
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar8 = *(int **)(param_2 + 0x4c);
    }
    else {
      if (puVar2 == (undefined *)0x896e9163) {
        iVar4 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156bd8 + 0x11569dc),0);
        if (iVar4 == 0) {
          return;
        }
        puVar9 = (undefined8 *)(param_2 + 0xd0);
        goto LAB_01156a90;
      }
      if (puVar2 != (undefined *)0xbb3e0dd3) {
        if (puVar2 != (undefined *)0xbc184032) {
          return;
        }
        iVar3 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156b94 + 0x115660c),0);
        if (iVar3 == 0) {
          return;
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(param_2 + 0x38);
        goto LAB_01156ad8;
      }
      uVar10 = System_String__op_Equality_2a0975c
                         (param_3,**(undefined4 **)(_UNK_01156bbc + 0x11568a0),0);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 == 0) {
        return;
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar8 = *(int **)(param_2 + 0x20);
    }
  }
  else {
    if ((undefined *)0xd6c378df < puVar2) {
      if (puVar2 < (undefined *)0xf7507e1c) {
        if (puVar2 != (undefined *)0xe349cb99) {
          if (puVar2 != (undefined *)0xf7507e1b) {
            return;
          }
          iVar4 = System_String__op_Equality_2a0975c
                            (param_3,**(undefined4 **)(_UNK_01156b9c + 0x11566b8),0);
          if (iVar4 == 0) {
            return;
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar4 = *(int *)(param_2 + 0x48);
          goto LAB_01156a24;
        }
        iVar3 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156ba8 + 0x1156a48),0);
        if (iVar3 == 0) {
          return;
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(param_2 + 0x30);
      }
      else {
        if (puVar2 != (undefined *)0xfa3016a4) {
          if (puVar2 != (undefined *)0xfa94f80a) {
            return;
          }
          uVar10 = System_String__op_Equality_2a0975c
                             (param_3,**(undefined4 **)(_UNK_01156ba0 + 0x1156758),0);
          uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((int)uVar10 == 0) {
            return;
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar8 = *(int **)(param_2 + 0x44);
          goto LAB_01156978;
        }
        iVar3 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156ba4 + 0x1156ab8),0);
        if (iVar3 == 0) {
          return;
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(param_2 + 0x2c);
      }
LAB_01156ad8:
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      bVar1 = (int)-(iVar5 + (uint)(iVar4 != 0)) < 0 !=
              (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(iVar4 != 0)));
      if (iVar3 != 0) {
        Rotatelab_ObservableLong__set_Value_fb2d14(iVar3,bVar1,bVar1,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4(0,bVar1,0);
    }
    if (puVar2 == (undefined *)0xbeaa6d1a) {
      uVar10 = System_String__op_Equality_2a0975c
                         (param_3,**(undefined4 **)(_UNK_01156bb8 + 0x1156958),0);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 == 0) {
        return;
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar8 = *(int **)(param_2 + 0x1c);
    }
    else {
      if (puVar2 == (undefined *)0xce9cc36b) {
        iVar4 = System_String__op_Equality_2a0975c
                          (param_3,**(undefined4 **)(_UNK_01156bd0 + 0x1156828),0);
        if (iVar4 == 0) {
          return;
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = *(int *)(param_2 + 0x50);
        goto LAB_01156a24;
      }
      if (puVar2 != (undefined *)0xd6c378df) {
        return;
      }
      uVar10 = System_String__op_Equality_2a0975c
                         (param_3,**(undefined4 **)(_UNK_01156b98 + 0x1156554),0);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 == 0) {
        return;
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar8 = *(int **)(param_2 + 0x40);
    }
  }
LAB_01156978:
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xf8))(piVar8,uVar6,iVar4,iVar5,*(undefined4 *)(*piVar8 + 0xfc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

