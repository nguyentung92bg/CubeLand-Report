/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_mainTexture
UnityEngine_Texture_o* Rotatelab_UI_SlicedFilledImage__get_mainTexture (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_mainTexture
   UnityEngine_Texture_o* Rotatelab_UI_SlicedFilledImage__get_mainTexture
   (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method); */

int Rotatelab_UI_SlicedFilledImage__get_mainTexture_1120964(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int iStack_14;
  
  pcVar6 = (char *)(_UNK_01130b0c + 0x1130978);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130b10 + 0x113098c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130b14 + 0x1130998));
    *pcVar6 = '\x01';
  }
  uVar1 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  piVar8 = *(int **)(_UNK_01130b18 + 0x11309b8);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
  if (iVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x1c0))(param_1,*(undefined4 *)(*param_1 + 0x1c4));
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x1c0))(param_1,*(undefined4 *)(*param_1 + 0x1c4));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = UnityEngine_Material__get_mainTexture_35c7d4c(iVar2,0);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0x1c0))(param_1,*(undefined4 *)(*param_1 + 0x1c4));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar6 = (char *)(_UNK_035d7dc8 + 0x35d7d60);
        if (*pcVar6 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d7dcc + 0x35d7d74),0);
          *pcVar6 = '\x01';
        }
        uVar3 = UnityEngine_Material__GetFirstPropertyNameIdByAttribute_35c7b80(iVar2,0x80);
        if (0x7fffffff < uVar3) {
          piVar8 = *(int **)(_UNK_035d7dd0 + 0x35d7da0);
          iVar7 = *piVar8;
          if (*(int *)(iVar7 + 0x74) == 0) {
            thunk_FUN_00ec3934();
            iVar7 = *piVar8;
          }
          uVar3 = *(uint *)(*(int *)(iVar7 + 0x5c) + 4);
        }
        pcVar6 = (char *)(_UNK_035da51c + 0x35da3a0);
        if (*pcVar6 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035da520 + 0x35da3b4));
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035da524 + 0x35da3c0));
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035da528 + 0x35da3cc));
          *pcVar6 = '\x01';
        }
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar7 = *(int *)(iVar2 + 8);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar2,0);
        }
        if (*(int *)(**(int **)(_UNK_035da52c + 0x35da404) + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        pcVar4 = *(code **)(_UNK_035da530 + 0x35da420);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)thunk_FUN_00ec3774(_UNK_035da534 + 0x35da430);
          *(code **)(_UNK_035da538 + 0x35da440) = pcVar4;
        }
        iVar2 = (*pcVar4)(iVar7,uVar3);
        iVar7 = **(int **)(_UNK_035da53c + 0x35da45c);
        if (*(int *)(iVar7 + 0x1c) == 0) {
          thunk_FUN_00efd7c4(iVar7);
        }
        iVar5 = 0;
        iStack_14 = 0;
        if (iVar2 != 0) {
          pcVar6 = (char *)(_UNK_035da540 + 0x35da48c);
          if (*pcVar6 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035da544 + 0x35da4a0));
            *pcVar6 = '\x01';
          }
          iVar5 = 0;
          iStack_14 = iVar2;
          iVar2 = FUN_0166c57c(&iStack_14,0);
          iVar7 = **(int **)(iVar7 + 0x1c);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = thunk_FUN_00efd768(iVar7);
          }
          if ((iVar2 != 0) && (iVar5 = thunk_FUN_00f00bc8(iVar2,iVar7), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f4fe34(iVar2,iVar7);
          }
        }
        return iVar5;
      }
    }
    piVar8 = *(int **)(_UNK_01130b1c + 0x1130aec);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    return *(int *)(*(int *)(iVar2 + 0x5c) + 4);
  }
  iVar2 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_035b3004 + 0x35b2eb4);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b3008 + 0x35b2ec8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b300c + 0x35b2ed4));
    *pcVar6 = '\x01';
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar2 + 8);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar2,0);
  }
  pcVar4 = *(code **)(_UNK_035b3010 + 0x35b2f0c);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)thunk_FUN_00ec3774(_UNK_035b3014 + 0x35b2f1c);
    *(code **)(_UNK_035b3018 + 0x35b2f2c) = pcVar4;
  }
  iVar2 = (*pcVar4)(iVar7);
  iVar7 = **(int **)(_UNK_035b301c + 0x35b2f44);
  if (*(int *)(iVar7 + 0x1c) == 0) {
    thunk_FUN_00efd7c4(iVar7);
  }
  iVar5 = 0;
  iStack_14 = 0;
  if (iVar2 != 0) {
    pcVar6 = (char *)(_UNK_035b3020 + 0x35b2f74);
    if (*pcVar6 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b3024 + 0x35b2f88));
      *pcVar6 = '\x01';
    }
    iVar5 = 0;
    iStack_14 = iVar2;
    iVar2 = FUN_0166c57c(&iStack_14,0);
    iVar7 = **(int **)(iVar7 + 0x1c);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = thunk_FUN_00efd768(iVar7);
    }
    if ((iVar2 != 0) && (iVar5 = thunk_FUN_00f00bc8(iVar2,iVar7), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe34(iVar2,iVar7);
    }
  }
  return iVar5;
}

