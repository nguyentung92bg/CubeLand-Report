/* IL2CPP: Rotatelab.OfflinePlayController.<ShowDialogWhileOfflineAsync>d__4$$MoveNext
void Rotatelab_OfflinePlayController__ShowDialogWhileOfflineAsync_d__4__MoveNext (Rotatelab_OfflinePlayController__ShowDialogWhileOfflineAsync_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.OfflinePlayController.<ShowDialogWhileOfflineAsync>d__4$$MoveNext
   void Rotatelab_OfflinePlayController__ShowDialogWhileOfflineAsync_d__4__MoveNext
   (Rotatelab_OfflinePlayController__ShowDialogWhileOfflineAsync_d__4_o __this, const MethodInfo*
   method); */

void Rotatelab_OfflinePlayController__ShowDialogWhileOfflineAsync_d__4__MoveNext_fb7f00
               (int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int *piStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_00fc8338 + 0xfc7f18);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc833c + 0xfc7f2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8340 + 0xfc7f38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8344 + 0xfc7f44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8348 + 0xfc7f50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc834c + 0xfc7f5c));
    *pcVar6 = '\x01';
  }
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  uStack_2c = 0;
  if (*param_1 != 0) goto LAB_00fc803c;
  piVar7 = (int *)param_1[2];
  iVar8 = param_1[3];
  *param_1 = -1;
  param_1[2] = 0;
  param_1[3] = 0;
  piStack_28 = piVar7;
  iStack_24 = iVar8;
  do {
    pcVar6 = (char *)(_UNK_00fc8350 + 0xfc7fac);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8354 + 0xfc7fc0));
      *pcVar6 = '\x01';
    }
    if (piVar7 != (int *)0x0) {
      iVar1 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_00fc8358 + 0xfc7fe0)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
            goto LAB_00fc8028;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_00fc8358 + 0xfc7fe0),2);
LAB_00fc8028:
      (*(code *)*puVar2)(piVar7,(int)(short)iVar8,puVar2[1]);
    }
LAB_00fc803c:
    iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fc8378 + 0xfc8048));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = Rotatelab_Networking_SatoriFlag_bool___op_Implicit_1a88b00
                      (*(undefined4 *)(iVar8 + 0x48),**(undefined4 **)(_UNK_00fc837c + 0xfc8068));
    if (iVar8 != 0) {
LAB_00fc8254:
      *param_1 = -2;
      func_0x00fcef34(param_1 + 1,0);
      return;
    }
    puVar2 = *(undefined4 **)(_UNK_00fc8380 + 0xfc8084);
    iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar8 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = Hiro_NetworkMonitor__get_Online_296750c(*(int *)(iVar8 + 0x2c),0);
    if (iVar8 != 0) goto LAB_00fc8254;
    iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_HiroController__ShowInternetConnectionDialogAsync_114ce04
              (&piStack_38,iVar8,0,0);
    piVar5 = *(int **)(_UNK_00fc835c + 0xfc80f4);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_38,0);
    iVar1 = iStack_34;
    piVar7 = piStack_38;
    pcVar6 = (char *)(_UNK_00fc8360 + 0xfc8128);
    iStack_24 = iStack_34;
    iVar8 = (int)(short)iStack_34;
    piStack_28 = piStack_38;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8364 + 0xfc814c));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_00fc8368 + 0xfc8174);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fc836c + 0xfc8188));
      *pcVar6 = '\x01';
    }
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      iVar3 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_00fc8370 + 0xfc81a8)) {
            puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xc0);
            goto LAB_00fc81f8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_00fc8370 + 0xfc81a8),0);
LAB_00fc81f8:
      iVar3 = (*(code *)*puVar2)(piVar7,iVar8,puVar2[1]);
      if (iVar3 == 0) {
        param_1[3] = iVar1;
        *param_1 = 0;
        param_1[2] = (int)piVar7;
        thunk_FUN_00ec5080(param_1 + 2,0);
        func_0x00fcf51c(param_1 + 1,&piStack_28,param_1,**(undefined4 **)(_UNK_00fc8374 + 0xfc8240))
        ;
        return;
      }
    }
  } while( true );
}

