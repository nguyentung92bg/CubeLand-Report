/* IL2CPP: Rotatelab.Shop.CurrencyReward$$GiveReward
void Rotatelab_Shop_CurrencyReward__GiveReward (Rotatelab_Shop_CurrencyReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.CurrencyReward$$GiveReward
   void Rotatelab_Shop_CurrencyReward__GiveReward (Rotatelab_Shop_CurrencyReward_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_CurrencyReward__GiveReward_10d3194(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_010e324c + 0x10e31ac);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3250 + 0x10e31c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3254 + 0x10e31cc));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e3258 + 0x10e31e0));
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uStack_1c = 0;
  uStack_20 = 0;
  System_Nullable_float____ctor_17dea40
            (&uStack_20,0x3fa00000,**(undefined4 **)(_UNK_010e325c + 0x10e3200));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
            (iVar1,uVar4,iVar3,iVar3 >> 0x1f,uStack_20,uStack_1c,0);
  return;
}

