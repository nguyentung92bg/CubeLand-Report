/* IL2CPP: Rotatelab.Scripts.BlasterController$$TryBreakIce
void Rotatelab_Scripts_BlasterController__TryBreakIce (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$TryBreakIce
   void Rotatelab_Scripts_BlasterController__TryBreakIce (Rotatelab_Scripts_BlasterController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__TryBreakIce_10331d0(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_010436e8 + 0x10431e8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010436ec + 0x10431fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010436f0 + 0x1043208));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010436f4 + 0x1043214));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010436f8 + 0x1043220));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010436fc + 0x104322c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043700 + 0x1043238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043704 + 0x1043244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043708 + 0x1043250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104370c + 0x104325c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043710 + 0x1043268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043714 + 0x1043274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043718 + 0x1043280));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104371c + 0x104328c));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (0 < param_1[0x25]) {
    param_1[0x25] = param_1[0x25] + -1;
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Behaviour__set_enabled_35fd7dc(param_1[4],1,0);
    if (param_1[0x25] < 1) {
      if (param_1[8] == 0) {
        (**(code **)(*param_1 + 0x110))(param_1,1,*(undefined4 *)(*param_1 + 0x114));
        (**(code **)(*param_1 + 0x150))(param_1,4,*(undefined4 *)(*param_1 + 0x154));
      }
      if (param_1[0x46] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                (&uStack_38,param_1[0x46],**(undefined4 **)(_UNK_01043728 + 0x10433f0));
      uStack_28 = uStack_38;
      uStack_24 = puStack_34;
      uStack_20 = uStack_30;
      iStack_1c = iStack_2c;
      uStack_38 = 0;
      puVar6 = *(undefined4 **)(_UNK_0104372c + 0x1043418);
      puStack_34 = &uStack_28;
      while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                               (&uStack_28,*puVar6), iVar1 != 0) {
        if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Scripts_ConnectionController__SetIced_1033758(iStack_1c,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_28,**(undefined4 **)(_UNK_01043730 + 0x1043454));
      if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (param_1[4],**(undefined4 **)(_UNK_01043738 + 0x1043480),1,0,0);
      if (param_1[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[0x24],0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
      if (param_1[0x15] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[0x15],0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
      piVar4 = *(int **)(_UNK_0104373c + 0x1043514);
      iVar2 = param_1[0x23];
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar4;
      }
      puVar6 = *(undefined4 **)(iVar1 + 0x5c);
      iVar5 = puVar6[2];
      if (iVar5 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar6 = *(undefined4 **)(*piVar4 + 0x5c);
        }
        uVar7 = *puVar6;
        iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01043740 + 0x1043560));
        System_Action_object____ctor_1f11414
                  (iVar5,uVar7,**(undefined4 **)(_UNK_01043744 + 0x1043580),0);
        piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 8);
        *piVar4 = iVar5;
        thunk_FUN_00ec5080(piVar4,iVar5);
      }
      if (*(int *)(**(int **)(_UNK_01043748 + 0x10435a8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_object__15d6154
                (&uStack_38,iVar2,0x3e4ccccd,iVar5,0,0,**(undefined4 **)(_UNK_0104374c + 0x10435d4))
      ;
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01043750 + 0x10435f8));
      iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(&uStack_38,iVar2,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_BulletParticleManager__EmitIceBreak_ffa9dc
                (iVar1,uStack_38,puStack_34,uStack_30,0);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01043754 + 0x1043668));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,0xf,0);
    }
    else {
      if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (param_1[4],**(undefined4 **)(_UNK_01043720 + 0x1043304),1,0,0);
      Rotatelab_Scripts_BlasterController__UpdateIceHealthText_1031b30(param_1);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01043724 + 0x1043328));
      iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(&uStack_38,iVar2,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_BulletParticleManager__EmitIceHit_ffab28
                (iVar1,uStack_38,puStack_34,uStack_30,0);
    }
  }
  return;
}

