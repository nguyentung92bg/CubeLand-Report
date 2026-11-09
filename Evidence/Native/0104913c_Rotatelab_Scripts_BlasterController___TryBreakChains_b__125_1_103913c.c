/* IL2CPP: Rotatelab.Scripts.BlasterController$$<TryBreakChains>b__125_1
void Rotatelab_Scripts_BlasterController___TryBreakChains_b__125_1 (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$<TryBreakChains>b__125_1
   void Rotatelab_Scripts_BlasterController___TryBreakChains_b__125_1
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___TryBreakChains_b__125_1_103913c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_20 [16];
  
  pcVar4 = (char *)(_UNK_01043e14 + 0x1043ca4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043e18 + 0x1043cb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043e1c + 0x1043cc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043e20 + 0x1043cd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043e24 + 0x1043cdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043e28 + 0x1043ce8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043e2c + 0x1043cf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043e30 + 0x1043d00));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01043e34 + 0x1043d14));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 *)(iVar1 + 8) = 1;
  thunk_FUN_00ec5080((int *)(iVar1 + 0xc),param_1);
  iVar3 = *(int *)(param_1 + 0x124);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01043e38 + 0x1043d54));
  System_Action_object____ctor_1f11414(uVar2,iVar1,**(undefined4 **)(_UNK_01043e3c + 0x1043d70),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar3,uVar2,**(undefined4 **)(_UNK_01043e40 + 0x1043d94));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01043e44 + 0x1043da8));
  System_Action___ctor_2b10bac(uVar2,iVar1,**(undefined4 **)(_UNK_01043e48 + 0x1043dc8),0);
  if (*(int *)(**(int **)(_UNK_01043e4c + 0x1043ddc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2ce9f2c(auStack_20,0x3f4ccccd,uVar2,0,0,0);
  return;
}

