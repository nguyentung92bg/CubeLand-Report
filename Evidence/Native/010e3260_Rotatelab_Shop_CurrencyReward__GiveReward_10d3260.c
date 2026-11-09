/* IL2CPP: Rotatelab.Shop.CurrencyReward$$GiveReward
void Rotatelab_Shop_CurrencyReward__GiveReward (Rotatelab_Shop_CurrencyReward_o* __this, UnityEngine_RectTransform_o* uIParticleInsPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.CurrencyReward$$GiveReward
   void Rotatelab_Shop_CurrencyReward__GiveReward (Rotatelab_Shop_CurrencyReward_o* __this,
   UnityEngine_RectTransform_o* uIParticleInsPos, const MethodInfo* method); */

void Rotatelab_Shop_CurrencyReward__GiveReward_10d3260(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_010e3394 + 0x10e327c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3398 + 0x10e3290));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e339c + 0x10e329c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e33a0 + 0x10e32a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e33a4 + 0x10e32b4));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010e33a8 + 0x10e32c8);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 300);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
            (iVar1,param_2,*(undefined4 *)(param_1 + 0x14),0,0xc,
             **(undefined4 **)(_UNK_010e33ac + 0x10e330c));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e33b0 + 0x10e332c));
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uStack_1c = 0;
  uStack_20 = 0;
  System_Nullable_float____ctor_17dea40
            (&uStack_20,0x3fa00000,**(undefined4 **)(_UNK_010e33b4 + 0x10e3350));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
            (iVar1,uVar2,iVar3,iVar3 >> 0x1f,uStack_20,uStack_1c,0);
  return;
}

