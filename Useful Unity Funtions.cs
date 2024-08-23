///Used to determine if a string can be safely converted into an int. outs the result if it does.
void ConvertStringToInt()
{
  if (!int.TryParse(textAsString, out numberAsInt))
  {
  Debug.Log("Error. Please insert numbers only.");
  return;
  }
}

