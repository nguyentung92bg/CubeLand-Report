/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$OnSatoriFlagsRefreshedHandler
void Rotatelab_Boosters_BoosterGenerator__OnSatoriFlagsRefreshedHandler (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$OnSatoriFlagsRefreshedHandler
   void Rotatelab_Boosters_BoosterGenerator__OnSatoriFlagsRefreshedHandler
   (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BoosterGenerator__OnSatoriFlagsRefreshedHandler_113d28c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(_UNK_0114d274 + 0x114d178);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d278 + 0x114d18c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d27c + 0x114d198));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d280 + 0x114d1a4));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  puVar5 = *(undefined4 **)(_UNK_0114d284 + 0x114d1bc);
  puVar6 = *(undefined4 **)(_UNK_0114d288 + 0x114d1c4);
  while( true ) {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x20) + 0xc) <= (int)uVar4) {
      return;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x20),uVar4,*puVar5);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (iVar1 == 0) break;
    Rotatelab_Boosters_Booster__Initialize_113ae58(iVar1,*(undefined4 *)(iVar2 + uVar4 * 4 + 0x10));
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

