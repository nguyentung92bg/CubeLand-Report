/* IL2CPP: Rotatelab.UI.FailProgressLossInfo$$get_HasAny
bool Rotatelab_UI_FailProgressLossInfo__get_HasAny (Rotatelab_UI_FailProgressLossInfo_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.FailProgressLossInfo$$get_HasAny
   bool Rotatelab_UI_FailProgressLossInfo__get_HasAny (Rotatelab_UI_FailProgressLossInfo_o __this,
   const MethodInfo* method); */

bool Rotatelab_UI_FailProgressLossInfo__get_HasAny_111d0b4(char *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *param_1;
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = param_1[1];
  }
  if (bVar2 && cVar1 == '\0') {
    return param_1[2] != '\0';
  }
  return true;
}

