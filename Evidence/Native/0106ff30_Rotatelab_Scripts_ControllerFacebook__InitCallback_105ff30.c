/* IL2CPP: Rotatelab.Scripts.ControllerFacebook$$InitCallback
void Rotatelab_Scripts_ControllerFacebook__InitCallback (Rotatelab_Scripts_ControllerFacebook_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFacebook$$InitCallback
   void Rotatelab_Scripts_ControllerFacebook__InitCallback (Rotatelab_Scripts_ControllerFacebook_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFacebook__InitCallback_105ff30(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_01070044 + 0x106ff40);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070048 + 0x106ff54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107004c + 0x106ff60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070050 + 0x106ff6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070054 + 0x106ff78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070058 + 0x106ff84));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0107005c + 0x106ff98);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Facebook_Unity_FB__get_IsInitialized_118c748(0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Facebook_Unity_FB__ActivateApp_118e560(0);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01070060 + 0x106ffe0));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = **(undefined4 **)(_UNK_01070064 + 0x1070004);
    pcVar7 = (char *)(_UNK_0111ea54 + 0x111e8f4);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea58 + 0x111e908),uVar4,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea5c + 0x111e914));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea60 + 0x111e920));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea64 + 0x111e92c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea68 + 0x111e938));
      *pcVar7 = '\x01';
    }
    uStack_14 = 0;
    uStack_18 = 0;
    if (*(int *)(iVar1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Text_StringBuilder__Append_2a16604
                      (*(int *)(iVar1 + 0x68),**(undefined4 **)(_UNK_0111ea6c + 0x111e96c),0);
    if (*(int *)(**(int **)(_UNK_0111ea70 + 0x111e984) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_18,0);
    uVar2 = System_DateTime__ToString_2b4b52c
                      (&uStack_18,**(undefined4 **)(_UNK_0111ea74 + 0x111e9b4),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Text_StringBuilder__Append_2a16604(iVar1,uVar2,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Text_StringBuilder__Append_2a16604
                      (iVar1,**(undefined4 **)(_UNK_0111ea78 + 0x111e9fc),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Text_StringBuilder__Append_2a16604(iVar1,uVar4,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Text_StringBuilder__Append_2a16604(iVar1,**(undefined4 **)(_UNK_0111ea7c + 0x111ea44),0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01070068 + 0x107001c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = **(undefined4 **)(_UNK_0107006c + 0x107003c);
  pcVar7 = (char *)(_UNK_035c24ac + 0x35c23a0);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b0 + 0x35c23b4),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b4 + 0x35c23c0));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(_UNK_035c24b8 + 0x35c23d4);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_035c24bc + 0x35c23f0);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24c0 + 0x35c2404));
    *pcVar7 = '\x01';
  }
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar8;
  }
  piVar8 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_035c24c4 + 0x35c2448)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd8);
        goto LAB_035c2490;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)thunk_FUN_00efdb38(piVar8,**(int **)(_UNK_035c24c4 + 0x35c2448),3);
LAB_035c2490:
                    /* WARNING: Could not recover jumptable at 0x035c24a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar8,0,uVar4,puVar3[1]);
  return;
}

