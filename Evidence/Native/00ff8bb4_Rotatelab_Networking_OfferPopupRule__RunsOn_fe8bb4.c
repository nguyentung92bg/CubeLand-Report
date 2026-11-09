/* IL2CPP: Rotatelab.Networking.OfferPopupRule$$RunsOn
bool Rotatelab_Networking_OfferPopupRule__RunsOn (Rotatelab_Networking_OfferPopupRule_o* __this, int32_t trigger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.OfferPopupRule$$RunsOn
   bool Rotatelab_Networking_OfferPopupRule__RunsOn (Rotatelab_Networking_OfferPopupRule_o* __this,
   int32_t trigger, const MethodInfo* method); */

undefined1 Rotatelab_Networking_OfferPopupRule__RunsOn_fe8bb4(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_14;
  
  if (param_2 == 1) {
    puVar1 = (undefined1 *)(param_1 + 0x25);
  }
  else {
    if (param_2 != 0) {
      iStack_14 = param_2;
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00ff8c54 + 0xff8bf0));
      uVar2 = FUN_00ec393c(uVar2,&iStack_14);
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00ff8c58 + 0xff8c08));
      uVar3 = thunk_FUN_00f00cdc();
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00ff8c5c + 0xff8c1c));
      System_ArgumentOutOfRangeException___ctor_2b0f0f0(uVar3,uVar4,uVar2,0,0);
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00ff8c60 + 0xff8c44));
      func_0x00ec3920(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
    puVar1 = (undefined1 *)(param_1 + 0x24);
  }
  return *puVar1;
}

