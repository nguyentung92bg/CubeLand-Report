/* IL2CPP: Rotatelab.Scripts.GiftWrapperController.<>c$$<Destroy>b__22_1
void Rotatelab_Scripts_GiftWrapperController___c___Destroy_b__22_1 (Rotatelab_Scripts_GiftWrapperController___c_o* __this, Rotatelab_Scripts_GiftWrapperController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GiftWrapperController.<>c$$<Destroy>b__22_1
   void Rotatelab_Scripts_GiftWrapperController___c___Destroy_b__22_1
   (Rotatelab_Scripts_GiftWrapperController___c_o* __this,
   Rotatelab_Scripts_GiftWrapperController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_GiftWrapperController___c___Destroy_b__22_1_100f6e8
               (undefined4 param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = (char *)(_UNK_0101f870 + 0x101f6fc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101f874 + 0x101f710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101f878 + 0x101f71c));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(param_2 + 0x20);
  uVar3 = 0;
  while( true ) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar3) {
      iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0101f87c + 0x101f7c8));
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar5,0x17,0);
      iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0101f880 + 0x101f7f8));
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Grid_GridManager__RemoveFromGrid_1107024
                (iVar5,param_2,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x24),0);
      iVar5 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar2 = (char *)(iRam036120c4 + 0x3612050);
      if (*pcVar2 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
        *pcVar2 = '\x01';
      }
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
          *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar5,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar4 = *(int *)(iVar5 + 0x10 + uVar3 * 4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(iVar4,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetParent_3615940(iVar1,0,0);
    if (iVar4 == 0) break;
    UnityEngine_ParticleSystem__Play_368e960(iVar4,0);
    uVar3 = uVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

