/* IL2CPP: Rotatelab.PreBoosters.PreBoosterGenerator.<>c$$<ResetUsage>b__4_0
void Rotatelab_PreBoosters_PreBoosterGenerator___c___ResetUsage_b__4_0 (Rotatelab_PreBoosters_PreBoosterGenerator___c_o* __this, Rotatelab_PreBoosters_PreBooster_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBoosterGenerator.<>c$$<ResetUsage>b__4_0
   void Rotatelab_PreBoosters_PreBoosterGenerator___c___ResetUsage_b__4_0
   (Rotatelab_PreBoosters_PreBoosterGenerator___c_o* __this, Rotatelab_PreBoosters_PreBooster_o* i,
   const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBoosterGenerator___c___ResetUsage_b__4_0_10ed8b8
               (undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_010fcef8 + 0x10fcea4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fcefc + 0x10fceb8));
    *pcVar2 = '\x01';
  }
  *(undefined2 *)(param_2 + 0x48) = 0;
  Rotatelab_PreBoosters_PreBooster__OnBoosterStateChanged_10ecf04(param_2);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010fcf00 + 0x10fcedc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined1 *)(iVar1 + 0x4c) = 0;
  return;
}

