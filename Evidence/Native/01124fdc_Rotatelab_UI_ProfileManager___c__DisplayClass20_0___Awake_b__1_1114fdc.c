/* IL2CPP: Rotatelab.UI.ProfileManager.<>c__DisplayClass20_0$$<Awake>b__1
void Rotatelab_UI_ProfileManager___c__DisplayClass20_0___Awake_b__1 (Rotatelab_UI_ProfileManager___c__DisplayClass20_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager.<>c__DisplayClass20_0$$<Awake>b__1
   void Rotatelab_UI_ProfileManager___c__DisplayClass20_0___Awake_b__1
   (Rotatelab_UI_ProfileManager___c__DisplayClass20_0_o* __this, const MethodInfo* method); */

void Rotatelab_UI_ProfileManager___c__DisplayClass20_0___Awake_b__1_1114fdc(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_01124d48 + 0x1124c30);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124d4c + 0x1124c44));
    *pcVar2 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01124d50 + 0x1124c5c);
  uVar4 = *(undefined4 *)(iVar5 + 0x2c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar3,uVar4,0);
  if (iVar1 == 0) {
    *(undefined4 *)(iVar5 + 0x2c) = uVar3;
    thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0x2c),uVar3);
    if (*(int *)(iVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = 0;
    UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(iVar5 + 0x18),uVar3,0);
    iVar5 = *(int *)(iVar5 + 0x24);
    while( true ) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar6) break;
      if (*(uint *)(iVar5 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar1 = *(int *)(iVar5 + 0x10 + uVar6 * 4);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x80);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar4 = UnityEngine_Object__op_Equality_36033f4(uVar4,uVar3,0);
      Rotatelab_UI_ProfileAvatarButton__SetSelected_11133ec(iVar1,uVar4);
      uVar6 = uVar6 + 1;
    }
  }
  return;
}

