/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$OnVisualHealthDepleted
void Rotatelab_Scripts_FlyingPiggyController__OnVisualHealthDepleted (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$OnVisualHealthDepleted
   void Rotatelab_Scripts_FlyingPiggyController__OnVisualHealthDepleted
   (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController__OnVisualHealthDepleted_100e0c0(int *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_0101e26c + 0x101e0d8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e270 + 0x101e0ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e274 + 0x101e0f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e278 + 0x101e104));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e27c + 0x101e110));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e280 + 0x101e11c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0101e284 + 0x101e130);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x138);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_30,iVar1,0);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_0101e288 + 0x101e190));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Vector3__object__Int32Enum__int___Raise_23a74b4
            (iVar4,uStack_30,uStack_2c,uStack_28,*(undefined4 *)(iVar1 + 0x34),0,param_1[0x1e],
             **(undefined4 **)(_UNK_0101e28c + 0x101e1d4));
  uVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101e290 + 0x101e1f4));
  if ((int)uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__OnTemporaryCoinsCollected_1083c68
            ((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_1[0x1e],param_1[0x1e] >> 0x1f,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101e294 + 0x101e22c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,0x15,0);
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}

