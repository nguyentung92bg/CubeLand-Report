/* IL2CPP: Rotatelab.UI.PreLevelStartController$$StartToGame
void Rotatelab_UI_PreLevelStartController__StartToGame (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$StartToGame
   void Rotatelab_UI_PreLevelStartController__StartToGame (Rotatelab_UI_PreLevelStartController_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__StartToGame_1126764(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01136874 + 0x1136778);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136878 + 0x113678c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113687c + 0x1136798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136880 + 0x11367a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136884 + 0x11367b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136888 + 0x11367bc));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0113688c + 0x11367d0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,4,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01136890 + 0x1136800));
  uVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01136894 + 0x1136814));
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01136898 + 0x1136828));
  System_Action___ctor_2b10bac(uVar3,uVar2,**(undefined4 **)(_UNK_0113689c + 0x1136844),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIManager__SetMainCanvas_1126b6c(iVar1,1,1,uVar3);
  return;
}

