/* IL2CPP: Rotatelab.Currency.CurrencyManager$$.ctor
void Rotatelab_Currency_CurrencyManager___ctor (Rotatelab_Currency_CurrencyManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.CurrencyManager$$.ctor
   void Rotatelab_Currency_CurrencyManager___ctor (Rotatelab_Currency_CurrencyManager_o* __this,
   const MethodInfo* method); */

int Rotatelab_Currency_CurrencyManager___ctor_1083dc8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_01093f38 + 0x1093ddc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093f3c + 0x1093df0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093f40 + 0x1093dfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093f44 + 0x1093e08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093f48 + 0x1093e14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093f4c + 0x1093e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093f50 + 0x1093e2c));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01093f54 + 0x1093e40));
  Rotatelab_ObservableLong___ctor_fb30c8(uVar1,0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  puVar3 = *(undefined4 **)(_UNK_01093f58 + 0x1093e6c);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  Rotatelab_ObservableBooster___ctor_fb3128(uVar1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  Rotatelab_ObservableBooster___ctor_fb3128(uVar1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar1);
  puVar3 = *(undefined4 **)(_UNK_01093f5c + 0x1093ebc);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  Rotatelab_Save_SavedInt___ctor_10796b8(uVar1,**(undefined4 **)(_UNK_01093f60 + 0x1093ed4),0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  Rotatelab_Save_SavedInt___ctor_10796b8(uVar1,**(undefined4 **)(_UNK_01093f64 + 0x1093f08),0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

