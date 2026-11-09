/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$MaxDebugger
void Rotatelab_Debugging_CreativeCanvasController__MaxDebugger (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03599fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$MaxDebugger
   void Rotatelab_Debugging_CreativeCanvasController__MaxDebugger
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__MaxDebugger_110e830(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 *****pppppuVar8;
  uint unaff_r7;
  undefined4 ****appppuStack_48 [3];
  undefined1 uStack_39;
  undefined4 ***pppuStack_38;
  uint uStack_34;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_0111e8c4 + 0x111e840);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e8c8 + 0x111e854));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e8cc + 0x111e860));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111e8d0 + 0x111e874));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Ads_AdManager__get_IsEnabled_10f5748(iVar1,0);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_0111e8d4 + 0x111e8a8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_029bf47c + 0x29bf38c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029bf480 + 0x29bf3a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029bf484 + 0x29bf3ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029bf488 + 0x29bf3b8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_029bf48c + 0x29bf3cc);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  iVar7 = **(int **)(_UNK_029bf490 + 0x29bf3ec);
  iVar2 = *(int *)(iVar7 + 0x1c);
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar2 == 0) {
    FUN_00efd7c4(iVar7);
    iVar2 = *(int *)(iVar7 + 0x1c);
  }
  iVar2 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = unaff_r4;
  uVar3 = UnityEngine_AndroidJNIHelper__GetMethodID_3577dcc
                    (*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc),
                     **(undefined4 **)(_UNK_029bf494 + 0x29bf470),iVar2,1);
  uStack_24 = uStack_18;
  pcVar5 = (char *)(_UNK_0359a08c + 0x3599eb0);
  iStack_2c = **(int **)(_UNK_0359a090 + 0x3599eb8);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a094 + 0x3599ed8));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a098 + 0x3599ee4));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a09c + 0x3599ef0));
    *pcVar5 = '\x01';
  }
  if (iVar2 != 0) {
    unaff_r7 = *(uint *)(iVar2 + 0xc);
  }
  pppppuVar8 = (undefined4 *****)0x0;
  uStack_34 = 0;
  pppuStack_38 = (undefined4 ***)0x0;
  uStack_39 = 0;
  if (iVar2 != 0 && unaff_r7 != 0) {
    if ((unaff_r7 & 0x1fffffff) != 0) {
      pppppuVar8 = appppuStack_48 + unaff_r7 * -2;
    }
    thunk_FUN_00f88e5c(pppppuVar8);
    if (0x7fffffff < unaff_r7) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException_2b94878(0);
    }
    pppuStack_38 = pppppuVar8;
    uStack_34 = unaff_r7;
    if (0 < (int)unaff_r7) {
      UnityEngine_AndroidJNISafe__PushLocalFrame_3582d60(unaff_r7);
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray_35778f0(iVar2,pppppuVar8,unaff_r7);
    }
  }
  else {
    uStack_34 = 0;
    unaff_r7 = 0;
    pppuStack_38 = (undefined4 *****)0x0;
  }
  appppuStack_48[2] = (undefined4 ****)&uStack_39;
  appppuStack_48[0] = (undefined4 ****)0x0;
  appppuStack_48[1] = &pppuStack_38;
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AndroidJNISafe__CallStaticVoidMethod_3583c18
            (*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc),uVar3,pppppuVar8,unaff_r7);
  iVar1 = *(int *)((uint)&pppuStack_38 | 4);
  uStack_39 = 0 < iVar1;
  if (0 < iVar1) {
    pcVar4 = *(code **)(_UNK_0359a0a0 + 0x3599f9c);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = (code *)thunk_FUN_00ec3774(_UNK_0359a0a4 + 0x3599fac);
      *(code **)(_UNK_0359a0a8 + 0x3599fbc) = pcVar4;
    }
    (*pcVar4)(0);
  }
  if (**(int **)(_UNK_0359a0ac + 0x3599fe4) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

