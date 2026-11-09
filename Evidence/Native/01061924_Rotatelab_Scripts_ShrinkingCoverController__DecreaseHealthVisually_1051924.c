/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$DecreaseHealthVisually
void Rotatelab_Scripts_ShrinkingCoverController__DecreaseHealthVisually (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$DecreaseHealthVisually
   void Rotatelab_Scripts_ShrinkingCoverController__DecreaseHealthVisually
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController__DecreaseHealthVisually_1051924(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01061b9c + 0x106193c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061ba0 + 0x1061950));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061ba4 + 0x106195c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061ba8 + 0x1061968));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061bac + 0x1061974));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061bb0 + 0x1061980));
    *pcVar6 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  uStack_28 = 0;
  Rotatelab_Scripts_ShrinkingCoverController__AnimateCrack_1051bcc(param_1);
  if (*(int *)(param_1 + 0x6c) < 1) {
    Rotatelab_Scripts_ShrinkingCoverController__StopHitSoundLoop_1052014(param_1);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01061bb4 + 0x1061a44));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,0x15,0);
    Rotatelab_Scripts_ShrinkingCoverController__UnoccupyNextRow_1052050(param_1,1);
    PrimeTween_Sequence__Create_2cef1e0(&uStack_38,1,0,1,0,0,0);
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_48,&uStack_28,0x3e800000,0);
    piVar7 = *(int **)(_UNK_01061bb8 + 0x1061ac8);
    iVar3 = *piVar7;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar7;
    }
    puVar5 = *(undefined4 **)(iVar3 + 0x5c);
    iVar8 = puVar5[2];
    if (iVar8 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar5 = *(undefined4 **)(*piVar7 + 0x5c);
      }
      uVar4 = *puVar5;
      iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01061bbc + 0x1061b18));
      System_Action_object____ctor_1f11414
                (iVar8,uVar4,**(undefined4 **)(_UNK_01061bc0 + 0x1061b38),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
      *piVar7 = iVar8;
      thunk_FUN_00ec5080(piVar7,iVar8);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_38,&uStack_28,param_1,iVar8,0,**(undefined4 **)(_UNK_01061bc4 + 0x1061b68));
    *(undefined4 *)(param_1 + 0xa8) = uStack_38;
    *(undefined4 *)(param_1 + 0xac) = uStack_34;
    *(undefined4 *)(param_1 + 0xb0) = uStack_30;
    *(undefined4 *)(param_1 + 0xb4) = uStack_2c;
    thunk_FUN_00ec5080(param_1 + 0xb0,0);
  }
  else {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01061bc8 + 0x10619c0));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,0xc,0);
    uVar4 = UnityEngine_Time__get_time_3610900(0);
    piVar7 = (int *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0xcc) = uVar4;
    if (*piVar7 == 0) {
      uVar4 = Rotatelab_Scripts_ShrinkingCoverController__HitSoundLoopRoutine_1052220(param_1);
      uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
      *(undefined4 *)(param_1 + 200) = uVar4;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar7 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar7 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  return;
}

