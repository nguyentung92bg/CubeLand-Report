/* IL2CPP: Rotatelab.Audio.AudioManager$$OnMainCanvasChangeHalfwayHandler
void Rotatelab_Audio_AudioManager__OnMainCanvasChangeHalfwayHandler (Rotatelab_Audio_AudioManager_o* __this, int32_t arg1, bool arg2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$OnMainCanvasChangeHalfwayHandler
   void Rotatelab_Audio_AudioManager__OnMainCanvasChangeHalfwayHandler
   (Rotatelab_Audio_AudioManager_o* __this, int32_t arg1, bool arg2, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager__OnMainCanvasChangeHalfwayHandler_108d9c4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_0109da6c + 0x109d9d8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109da70 + 0x109d9ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109da74 + 0x109d9f8));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0109da78 + 0x109da0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  piVar7 = *(int **)(_UNK_0109da7c + 0x109da3c);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar7;
  }
  if (iVar3 <= *(int *)(*(int *)(iVar4 + 0x5c) + 8)) {
    return;
  }
  pcVar6 = (char *)(_UNK_0109dad4 + 0x109da94);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109dad8 + 0x109daa8));
    *pcVar6 = '\x01';
  }
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(param_1 + 0x18),**(undefined4 **)(_UNK_0109dadc + 0x109dabc));
  pcVar6 = (char *)(_UNK_0108b2d8 + 0x108adf0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2dc + 0x108ae04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2e0 + 0x108ae10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2e4 + 0x108ae1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2e8 + 0x108ae28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2ec + 0x108ae34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2f0 + 0x108ae40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2f4 + 0x108ae4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2f8 + 0x108ae58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2fc + 0x108ae64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b300 + 0x108ae70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b304 + 0x108ae7c));
    *pcVar6 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
            (*(int *)(param_1 + 0x18),uVar2,**(undefined4 **)(_UNK_0108b308 + 0x108aec0));
  iVar3 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(param_1 + 0x18),**(undefined4 **)(_UNK_0108b30c + 0x108aed4));
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar6 = (char *)(_UNK_035a955c + 0x35a94e0);
    if (*pcVar6 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a9560 + 0x35a94f4));
      *pcVar6 = '\x01';
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(iVar3 + 8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar3,0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035a9564 + 0x35a952c);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035a9568 + 0x35a953c);
      *(code **)(_UNK_035a956c + 0x35a954c) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x035a9558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar4,1);
    return;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0108b310 + 0x108aef0));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar3 + 0x14) + 0x10) == 1) {
    PrimeTween_Sequence__Create_2cef1e0(&uStack_58,1,0,1,0,0,0);
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_AudioSource__get_volume_35995c4(*(int *)(param_1 + 0x10),0);
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108b314 + 0x108af80));
    System_Action_float____ctor_1f12930
              (uVar1,param_1,**(undefined4 **)(_UNK_0108b318 + 0x108af9c),0);
    if (*(int *)(**(int **)(_UNK_0108b31c + 0x108afb0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_2ce885c(&uStack_68,uVar2,0,0x3f000000,uVar1,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_68,&uStack_48,uStack_68,uStack_64,uStack_60,uStack_5c,0);
    piVar7 = *(int **)(_UNK_0108b320 + 0x108b038);
    iVar3 = *piVar7;
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar7;
    }
    puVar5 = *(undefined4 **)(iVar3 + 0x5c);
    iVar4 = puVar5[1];
    if (iVar4 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar5 = *(undefined4 **)(*piVar7 + 0x5c);
      }
      uVar2 = *puVar5;
      iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108b324 + 0x108b088));
      System_Action_object____ctor_1f11414
                (iVar4,uVar2,**(undefined4 **)(_UNK_0108b328 + 0x108b0a8),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
      *piVar7 = iVar4;
      thunk_FUN_00ec5080(piVar7,iVar4);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_58,&uStack_48,param_1,iVar4,0,**(undefined4 **)(_UNK_0108b32c + 0x108b0d8));
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(param_1 + 0x1c),0x20);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20(iVar3,&uStack_2c,&uStack_30,&uStack_34);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__set_clip_35998b0(*(int *)(param_1 + 0x10),uStack_2c,0);
    uVar2 = uStack_30;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__set_volume_35996b0(*(int *)(param_1 + 0x10),uStack_30,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__set_pitch_35997b0(*(int *)(param_1 + 0x10),uStack_34,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__Play_35999ec(*(int *)(param_1 + 0x10),0);
    PrimeTween_Sequence__Create_2cef1e0(&uStack_58,1,0,1,0,0,0);
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108b330 + 0x108b220));
    System_Action_float____ctor_1f12930
              (uVar1,param_1,**(undefined4 **)(_UNK_0108b334 + 0x108b240),0);
    if (*(int *)(**(int **)(_UNK_0108b338 + 0x108b254) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_2ce885c(&uStack_68,0,uVar2,0x3f000000,uVar1,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_68,&uStack_48,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  }
  return;
}

